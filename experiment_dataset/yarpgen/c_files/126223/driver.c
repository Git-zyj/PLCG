#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 845770850301486709LL;
unsigned int var_2 = 742511154U;
unsigned long long int var_3 = 3359865884025711516ULL;
int var_7 = 450181202;
long long int var_9 = -8036197683103709953LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = 6670253372249211858LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
