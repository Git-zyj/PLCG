#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_3 = (short)20170;
int var_5 = -141589000;
unsigned short var_9 = (unsigned short)33806;
short var_12 = (short)-11385;
int zero = 0;
signed char var_13 = (signed char)41;
short var_14 = (short)-2261;
unsigned int var_15 = 2526970538U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
