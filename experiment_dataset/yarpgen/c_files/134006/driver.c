#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2510367275864488099LL;
long long int var_4 = 4997184063785945508LL;
long long int var_7 = 7900863687446915731LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_14 = 1181277972960395603LL;
long long int var_15 = -1878146045675632708LL;
long long int var_16 = 4420224853245070016LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
