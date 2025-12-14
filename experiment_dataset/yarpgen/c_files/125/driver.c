#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -514366541;
unsigned char var_2 = (unsigned char)163;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1004693090U;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 2506108234U;
short var_9 = (short)10607;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 4495700542545880878ULL;
unsigned int var_13 = 686886169U;
int var_14 = 1528227891;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
