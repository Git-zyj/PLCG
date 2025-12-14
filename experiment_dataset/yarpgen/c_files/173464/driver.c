#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
signed char var_3 = (signed char)76;
unsigned int var_4 = 2703787187U;
unsigned int var_5 = 3267590767U;
long long int var_6 = -6361169392880133159LL;
unsigned char var_7 = (unsigned char)76;
short var_8 = (short)7900;
unsigned long long int var_10 = 14260345495059924128ULL;
signed char var_12 = (signed char)88;
long long int var_14 = -4855755201870104734LL;
int zero = 0;
long long int var_15 = 4692711889334116812LL;
unsigned char var_16 = (unsigned char)49;
unsigned int var_17 = 2664072437U;
unsigned char var_18 = (unsigned char)106;
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
