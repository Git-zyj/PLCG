#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13537059426241544934ULL;
signed char var_6 = (signed char)30;
_Bool var_14 = (_Bool)1;
unsigned char var_16 = (unsigned char)51;
int zero = 0;
unsigned char var_20 = (unsigned char)31;
int var_21 = -1454469687;
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
