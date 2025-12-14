#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)184;
int var_2 = -1319131739;
unsigned char var_3 = (unsigned char)16;
unsigned char var_7 = (unsigned char)230;
unsigned short var_9 = (unsigned short)21109;
int zero = 0;
unsigned char var_12 = (unsigned char)84;
int var_13 = 2005641277;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 100829552U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
