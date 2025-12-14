#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)8094;
signed char var_6 = (signed char)73;
unsigned long long int var_7 = 15209483501707327507ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_13 = (unsigned short)2928;
unsigned short var_14 = (unsigned short)9794;
int zero = 0;
unsigned short var_15 = (unsigned short)30359;
unsigned int var_16 = 220470341U;
long long int var_17 = -6136956099599511553LL;
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
