#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 506117497U;
unsigned long long int var_5 = 17623086735937794809ULL;
int var_9 = -1639018081;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 3077193736U;
long long int var_17 = 6499026958357935113LL;
long long int var_18 = 6058269090962211044LL;
unsigned char var_19 = (unsigned char)248;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
