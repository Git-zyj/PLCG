#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-97;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 6412761091759820433ULL;
unsigned int var_7 = 1968582998U;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
short var_12 = (short)26371;
int zero = 0;
unsigned long long int var_13 = 6702416982713451947ULL;
short var_14 = (short)29448;
unsigned long long int var_15 = 10243306374701862198ULL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
