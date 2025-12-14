#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54191;
unsigned short var_3 = (unsigned short)30756;
long long int var_6 = -9188698593699558252LL;
int var_12 = 1469627028;
short var_14 = (short)-13152;
int zero = 0;
unsigned int var_17 = 2354928395U;
short var_18 = (short)6186;
short var_19 = (short)542;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
