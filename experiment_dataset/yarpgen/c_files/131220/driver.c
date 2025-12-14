#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3044461907U;
long long int var_2 = 8678397384358508597LL;
unsigned short var_7 = (unsigned short)19149;
unsigned int var_9 = 2573352821U;
unsigned short var_10 = (unsigned short)64067;
unsigned short var_12 = (unsigned short)34911;
unsigned int var_13 = 2757955379U;
int zero = 0;
unsigned short var_15 = (unsigned short)45491;
unsigned long long int var_16 = 8768325129935919629ULL;
int var_17 = -1796628553;
short var_18 = (short)-23229;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
