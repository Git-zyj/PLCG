#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3245835205540704229LL;
int var_1 = -599402346;
int var_3 = -754498037;
int var_4 = 2023944193;
int var_5 = -116725843;
unsigned short var_6 = (unsigned short)6041;
unsigned int var_7 = 1662594728U;
unsigned int var_8 = 1910414964U;
int var_9 = -2003852955;
int zero = 0;
signed char var_10 = (signed char)102;
unsigned int var_11 = 3647784216U;
signed char var_12 = (signed char)69;
int var_13 = 91197966;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
