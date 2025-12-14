#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15121;
_Bool var_2 = (_Bool)0;
long long int var_3 = -676710473873837798LL;
long long int var_4 = 3372591393692701505LL;
unsigned int var_5 = 3721089518U;
unsigned long long int var_6 = 5109722770210081668ULL;
short var_8 = (short)18645;
long long int var_9 = 232654920840866308LL;
unsigned char var_10 = (unsigned char)247;
unsigned char var_12 = (unsigned char)23;
unsigned short var_13 = (unsigned short)18697;
int zero = 0;
unsigned char var_14 = (unsigned char)166;
int var_15 = 973825266;
long long int var_16 = -3727242354623991034LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
