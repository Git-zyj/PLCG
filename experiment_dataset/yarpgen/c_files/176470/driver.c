#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -224374652768419789LL;
long long int var_2 = -1740085728484219864LL;
unsigned long long int var_5 = 4763166569187708462ULL;
int zero = 0;
int var_15 = 722353639;
long long int var_16 = -286345124461995752LL;
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
