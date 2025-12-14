#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1006483750U;
int var_3 = -426424397;
unsigned short var_6 = (unsigned short)32732;
unsigned short var_7 = (unsigned short)58210;
unsigned int var_8 = 2011352202U;
unsigned short var_11 = (unsigned short)33189;
int var_16 = 1431681757;
unsigned long long int var_17 = 7790136601584694140ULL;
int zero = 0;
long long int var_18 = -5350590231056020659LL;
long long int var_19 = -8633892472734690756LL;
unsigned int var_20 = 3371054886U;
unsigned short var_21 = (unsigned short)15318;
unsigned int var_22 = 1967015326U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
