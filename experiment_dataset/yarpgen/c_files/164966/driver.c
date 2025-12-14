#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1422191767U;
unsigned short var_4 = (unsigned short)21964;
unsigned char var_5 = (unsigned char)82;
unsigned char var_6 = (unsigned char)117;
unsigned short var_10 = (unsigned short)31595;
signed char var_14 = (signed char)43;
unsigned char var_15 = (unsigned char)59;
int zero = 0;
unsigned short var_16 = (unsigned short)44911;
unsigned int var_17 = 2371021559U;
unsigned int var_18 = 3178728251U;
void init() {
}

void checksum() {
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
