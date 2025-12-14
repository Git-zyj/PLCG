#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -81007814;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_19 = 1685782566;
unsigned long long int var_20 = 17595952347934320186ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
