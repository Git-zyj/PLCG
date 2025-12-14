#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
unsigned char var_1 = (unsigned char)46;
unsigned short var_2 = (unsigned short)11859;
unsigned char var_5 = (unsigned char)215;
unsigned int var_6 = 3582639715U;
short var_12 = (short)32009;
int zero = 0;
long long int var_13 = -8156718031065507175LL;
short var_14 = (short)17219;
signed char var_15 = (signed char)-70;
unsigned long long int var_16 = 2793526982775639948ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
