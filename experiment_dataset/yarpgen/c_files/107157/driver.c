#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2908243835U;
unsigned int var_1 = 2194737109U;
signed char var_4 = (signed char)-19;
int zero = 0;
long long int var_12 = 1754390298372757039LL;
unsigned short var_13 = (unsigned short)6450;
unsigned long long int var_14 = 10291913136302507142ULL;
void init() {
}

void checksum() {
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
