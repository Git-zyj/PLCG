#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3693033594U;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int zero = 0;
int var_12 = 1177819444;
_Bool var_13 = (_Bool)0;
int var_14 = 686566830;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
