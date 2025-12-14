#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1355;
unsigned int var_5 = 2871194723U;
long long int var_12 = 2008973193016177066LL;
unsigned int var_13 = 2333933502U;
short var_14 = (short)-23448;
long long int var_16 = -480378514776820363LL;
int zero = 0;
signed char var_19 = (signed char)120;
signed char var_20 = (signed char)114;
short var_21 = (short)-2650;
unsigned int var_22 = 3890131816U;
void init() {
}

void checksum() {
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
