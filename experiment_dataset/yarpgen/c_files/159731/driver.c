#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-25496;
unsigned short var_8 = (unsigned short)42029;
unsigned long long int var_9 = 12092166327872190013ULL;
short var_10 = (short)-7730;
short var_11 = (short)-6977;
unsigned long long int var_12 = 732993137160330833ULL;
long long int var_18 = 7806887931207335786LL;
int zero = 0;
long long int var_20 = 2204959968697053238LL;
unsigned long long int var_21 = 16602742824459305634ULL;
_Bool var_22 = (_Bool)0;
int var_23 = 561655605;
short var_24 = (short)5202;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
