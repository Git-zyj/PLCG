#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 5156369495479237964LL;
unsigned int var_6 = 2613226638U;
unsigned short var_10 = (unsigned short)24783;
unsigned int var_11 = 3495488339U;
unsigned int var_12 = 1633383715U;
signed char var_13 = (signed char)-124;
short var_15 = (short)16396;
int zero = 0;
int var_17 = 841058748;
long long int var_18 = 7710464876708086500LL;
void init() {
}

void checksum() {
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
