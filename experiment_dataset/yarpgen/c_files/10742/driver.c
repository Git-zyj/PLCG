#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2815638873U;
unsigned short var_7 = (unsigned short)64925;
unsigned long long int var_11 = 3709211449234380080ULL;
short var_15 = (short)-29694;
signed char var_17 = (signed char)-118;
int zero = 0;
short var_19 = (short)-7575;
int var_20 = 461105668;
unsigned short var_21 = (unsigned short)37567;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
