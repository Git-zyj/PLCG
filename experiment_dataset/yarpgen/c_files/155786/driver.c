#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)122;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 9731711904009247403ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)13252;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 9660725898739395860ULL;
_Bool var_14 = (_Bool)1;
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
