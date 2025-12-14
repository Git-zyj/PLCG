#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8383352224340587278ULL;
signed char var_3 = (signed char)34;
int var_5 = 269047653;
short var_7 = (short)-31374;
unsigned char var_10 = (unsigned char)63;
unsigned long long int var_13 = 6857939044013978581ULL;
unsigned long long int var_15 = 12939033708114815279ULL;
int zero = 0;
unsigned int var_16 = 955412832U;
int var_17 = 1280993845;
int var_18 = 1403557935;
int var_19 = -1210412354;
unsigned char var_20 = (unsigned char)104;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
