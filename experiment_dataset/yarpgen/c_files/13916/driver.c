#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3884057803199689725LL;
unsigned char var_6 = (unsigned char)250;
signed char var_9 = (signed char)31;
int zero = 0;
unsigned long long int var_10 = 8099831847208164729ULL;
long long int var_11 = 6784369828271919520LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
