#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 18074172169464217585ULL;
short var_6 = (short)-891;
_Bool var_7 = (_Bool)0;
short var_9 = (short)-14728;
int zero = 0;
signed char var_11 = (signed char)46;
short var_12 = (short)2738;
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
