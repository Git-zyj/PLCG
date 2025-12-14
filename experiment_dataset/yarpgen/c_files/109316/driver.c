#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11027209113225634579ULL;
long long int var_13 = -233765154864663097LL;
long long int var_15 = -2968067633475501882LL;
int zero = 0;
unsigned long long int var_20 = 17003510876390889860ULL;
long long int var_21 = -539517817665723324LL;
void init() {
}

void checksum() {
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
