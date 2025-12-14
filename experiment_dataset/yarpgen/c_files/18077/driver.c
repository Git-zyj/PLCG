#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3096212579174570373ULL;
unsigned int var_5 = 762849054U;
signed char var_6 = (signed char)-7;
signed char var_8 = (signed char)6;
unsigned short var_10 = (unsigned short)6755;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = -1130109582;
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
