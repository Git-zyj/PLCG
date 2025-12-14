#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1500367072U;
unsigned short var_2 = (unsigned short)18744;
unsigned long long int var_6 = 8465693718227116250ULL;
unsigned long long int var_10 = 11293554073261840909ULL;
unsigned char var_12 = (unsigned char)254;
long long int var_13 = -1254316800920612623LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-31078;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
