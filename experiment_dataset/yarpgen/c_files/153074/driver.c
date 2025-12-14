#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6924679279773062200ULL;
unsigned short var_3 = (unsigned short)55364;
int var_6 = -1915634934;
unsigned long long int var_8 = 17227430884705926156ULL;
long long int var_11 = 3651176032460597295LL;
int var_13 = -700832573;
short var_14 = (short)-2991;
unsigned char var_15 = (unsigned char)125;
int zero = 0;
signed char var_18 = (signed char)42;
unsigned long long int var_19 = 12778400381721342150ULL;
void init() {
}

void checksum() {
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
