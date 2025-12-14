#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)1;
long long int var_14 = -8309061194073895027LL;
int zero = 0;
unsigned short var_15 = (unsigned short)55986;
int var_16 = -1752354612;
unsigned short var_17 = (unsigned short)25092;
unsigned long long int var_18 = 15110489357899115062ULL;
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
