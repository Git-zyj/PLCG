#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7536918295630085868LL;
short var_2 = (short)-1407;
long long int var_4 = -5293134443742817052LL;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_14 = (short)-23289;
signed char var_15 = (signed char)26;
long long int var_16 = -5887790148869569097LL;
unsigned long long int var_17 = 15758625853638584051ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
