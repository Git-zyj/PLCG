#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-43;
unsigned int var_3 = 1859114779U;
short var_4 = (short)627;
unsigned long long int var_13 = 10096871024382035570ULL;
int zero = 0;
unsigned long long int var_15 = 501662439059219466ULL;
unsigned char var_16 = (unsigned char)166;
int var_17 = -774409134;
int var_18 = 438199562;
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
