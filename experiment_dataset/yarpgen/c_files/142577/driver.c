#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17462301970025771348ULL;
unsigned short var_6 = (unsigned short)41209;
short var_8 = (short)-24965;
unsigned long long int var_9 = 2628494757763235054ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-16753;
long long int var_14 = 6219157565893666022LL;
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
