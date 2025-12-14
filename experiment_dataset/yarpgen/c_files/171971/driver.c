#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned long long int var_9 = 15285582276950876438ULL;
unsigned short var_10 = (unsigned short)12048;
long long int var_11 = -2963015262632804950LL;
int zero = 0;
long long int var_15 = 4836706157466091867LL;
long long int var_16 = -1388426305631557614LL;
unsigned long long int var_17 = 2097488499618144308ULL;
unsigned long long int var_18 = 10533839643525077346ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
