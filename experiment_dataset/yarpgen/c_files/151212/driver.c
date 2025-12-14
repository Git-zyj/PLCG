#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8426286007342330658LL;
unsigned int var_1 = 462538987U;
short var_3 = (short)3694;
int zero = 0;
int var_12 = 169274239;
int var_13 = 791348449;
signed char var_14 = (signed char)-5;
unsigned int var_15 = 3519461235U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
