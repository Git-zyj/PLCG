#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2263410927U;
unsigned long long int var_1 = 1675791513634419781ULL;
unsigned long long int var_3 = 1932261279257987329ULL;
signed char var_5 = (signed char)-113;
signed char var_6 = (signed char)-28;
unsigned int var_7 = 3044712046U;
unsigned long long int var_9 = 2109044759587593957ULL;
signed char var_13 = (signed char)-62;
int zero = 0;
unsigned char var_14 = (unsigned char)222;
short var_15 = (short)5399;
unsigned long long int var_16 = 12034948604353265274ULL;
unsigned long long int var_17 = 1646313985625546647ULL;
unsigned char var_18 = (unsigned char)117;
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
