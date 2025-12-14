#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)95;
short var_5 = (short)-28695;
unsigned short var_11 = (unsigned short)56031;
unsigned long long int var_15 = 10314560224215021044ULL;
unsigned long long int var_17 = 16589223956287574890ULL;
int zero = 0;
long long int var_18 = -289025173033154256LL;
short var_19 = (short)-25725;
unsigned short var_20 = (unsigned short)42857;
void init() {
}

void checksum() {
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
