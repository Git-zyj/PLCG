#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned long long int var_11 = 18097810882797628845ULL;
unsigned int var_13 = 3267642085U;
long long int var_14 = -6634361257442570691LL;
int zero = 0;
unsigned int var_16 = 2842758498U;
unsigned char var_17 = (unsigned char)244;
int var_18 = 458210054;
signed char var_19 = (signed char)-16;
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
