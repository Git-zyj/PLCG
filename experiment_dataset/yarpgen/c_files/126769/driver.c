#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 689852781U;
unsigned int var_5 = 3058119028U;
short var_6 = (short)-12061;
unsigned char var_8 = (unsigned char)95;
unsigned short var_10 = (unsigned short)26961;
int zero = 0;
unsigned long long int var_11 = 3443718471107580653ULL;
unsigned long long int var_12 = 9708224783567545997ULL;
long long int var_13 = 4926138195111997985LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
