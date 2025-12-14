#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20050;
int var_3 = -1364448696;
signed char var_4 = (signed char)84;
signed char var_5 = (signed char)67;
unsigned int var_7 = 1325510124U;
short var_10 = (short)-28397;
int zero = 0;
unsigned int var_14 = 3384970966U;
unsigned char var_15 = (unsigned char)219;
unsigned long long int var_16 = 1314825983344455573ULL;
unsigned int var_17 = 2546617051U;
long long int var_18 = -2115548631976541141LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
