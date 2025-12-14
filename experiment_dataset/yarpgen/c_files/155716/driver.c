#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3560848259U;
unsigned long long int var_4 = 963644660241581002ULL;
signed char var_7 = (signed char)-113;
unsigned long long int var_8 = 7034075283680668268ULL;
short var_10 = (short)1816;
int zero = 0;
signed char var_11 = (signed char)17;
int var_12 = 1622368761;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
