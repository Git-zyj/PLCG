#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)1803;
unsigned short var_13 = (unsigned short)52410;
unsigned short var_17 = (unsigned short)56237;
int zero = 0;
int var_20 = 425877243;
unsigned short var_21 = (unsigned short)42777;
int var_22 = -448725644;
void init() {
}

void checksum() {
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
