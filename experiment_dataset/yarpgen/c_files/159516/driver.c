#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 200224298;
int var_6 = 916823781;
short var_8 = (short)5488;
unsigned long long int var_15 = 2356749366136021619ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)213;
unsigned int var_20 = 255667968U;
unsigned char var_21 = (unsigned char)60;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
