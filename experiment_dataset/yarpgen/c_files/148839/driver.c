#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4077501701972091771ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 10729621775933006491ULL;
int var_8 = -584443392;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 4401298626464443339ULL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 1498159029089211670ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
