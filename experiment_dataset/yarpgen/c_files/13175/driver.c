#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1524815843U;
signed char var_4 = (signed char)-89;
short var_11 = (short)-18216;
signed char var_13 = (signed char)-59;
unsigned int var_15 = 3543229221U;
int zero = 0;
unsigned int var_17 = 2138863951U;
signed char var_18 = (signed char)-55;
short var_19 = (short)12889;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
