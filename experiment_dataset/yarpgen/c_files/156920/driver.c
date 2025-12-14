#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
long long int var_10 = 8573755215425238190LL;
int var_14 = 400516310;
int zero = 0;
signed char var_19 = (signed char)-28;
short var_20 = (short)-27646;
long long int var_21 = 678682456647296134LL;
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
