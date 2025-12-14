#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1065615669;
signed char var_5 = (signed char)31;
unsigned long long int var_6 = 7277957085467500463ULL;
signed char var_10 = (signed char)-126;
unsigned int var_11 = 3954251546U;
unsigned int var_12 = 3868409902U;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)17;
unsigned int var_17 = 1807933149U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
