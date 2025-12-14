#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4635032890047481959ULL;
signed char var_8 = (signed char)55;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
long long int var_12 = 2276423857162606067LL;
int zero = 0;
int var_15 = 87296149;
signed char var_16 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
