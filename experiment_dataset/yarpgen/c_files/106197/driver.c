#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26927;
unsigned char var_3 = (unsigned char)188;
unsigned long long int var_9 = 14861709960276873791ULL;
unsigned char var_10 = (unsigned char)13;
int zero = 0;
unsigned short var_13 = (unsigned short)62892;
unsigned int var_14 = 3899929664U;
unsigned int var_15 = 921873360U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
