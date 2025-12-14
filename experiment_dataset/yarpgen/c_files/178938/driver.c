#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)42;
unsigned short var_2 = (unsigned short)61893;
unsigned short var_4 = (unsigned short)28741;
unsigned char var_5 = (unsigned char)130;
unsigned char var_6 = (unsigned char)213;
unsigned long long int var_8 = 2127209192945770582ULL;
unsigned int var_9 = 1818306710U;
int zero = 0;
long long int var_11 = -3267135538247656949LL;
unsigned long long int var_12 = 12146631628780096603ULL;
unsigned long long int var_13 = 2061880183978887609ULL;
unsigned short var_14 = (unsigned short)56779;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
