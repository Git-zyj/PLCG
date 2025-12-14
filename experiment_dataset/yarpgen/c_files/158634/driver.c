#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51518;
unsigned char var_2 = (unsigned char)101;
long long int var_3 = 496570421060910022LL;
unsigned short var_4 = (unsigned short)15617;
unsigned char var_6 = (unsigned char)135;
signed char var_11 = (signed char)47;
unsigned int var_14 = 71507000U;
unsigned char var_16 = (unsigned char)116;
unsigned int var_17 = 3424505358U;
int zero = 0;
unsigned int var_18 = 399495376U;
short var_19 = (short)31241;
unsigned short var_20 = (unsigned short)56384;
long long int var_21 = -4422110140337722191LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
