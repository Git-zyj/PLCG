#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_6 = (unsigned short)38368;
unsigned char var_14 = (unsigned char)116;
unsigned int var_17 = 1487077628U;
int zero = 0;
unsigned char var_19 = (unsigned char)179;
short var_20 = (short)-8469;
short var_21 = (short)3572;
unsigned long long int var_22 = 5598910802869147975ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
