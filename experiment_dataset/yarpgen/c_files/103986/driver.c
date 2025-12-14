#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)36525;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 477004880433577749ULL;
unsigned short var_20 = (unsigned short)1044;
unsigned short var_21 = (unsigned short)10913;
long long int var_22 = 1736855370264165399LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
