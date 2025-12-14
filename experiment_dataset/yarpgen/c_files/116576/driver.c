#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22310;
int var_3 = 1773560920;
long long int var_4 = -1948591840281660550LL;
short var_7 = (short)-11029;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)200;
int zero = 0;
short var_10 = (short)19850;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-116;
unsigned int var_13 = 3037181201U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
