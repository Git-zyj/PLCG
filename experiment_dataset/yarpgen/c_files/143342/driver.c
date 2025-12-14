#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14557019604084231475ULL;
unsigned long long int var_1 = 14139830328357240335ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 14799436293923044288ULL;
int zero = 0;
int var_13 = -491441355;
signed char var_14 = (signed char)-61;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
