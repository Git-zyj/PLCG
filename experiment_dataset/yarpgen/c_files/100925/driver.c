#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8961529860459206092LL;
unsigned long long int var_8 = 18025066599289647205ULL;
_Bool var_9 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_20 = 6978739544052254287LL;
long long int var_21 = -6267211442069635614LL;
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
