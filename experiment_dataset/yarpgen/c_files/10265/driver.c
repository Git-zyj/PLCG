#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)56;
long long int var_12 = 6595016089679843695LL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)82;
int zero = 0;
unsigned long long int var_16 = 4686406204002526968ULL;
int var_17 = -869898222;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
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
