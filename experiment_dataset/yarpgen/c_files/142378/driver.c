#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6517316146943339860ULL;
int var_2 = 1109272365;
unsigned char var_5 = (unsigned char)14;
_Bool var_7 = (_Bool)1;
int var_9 = 1815802941;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 17053304050359566408ULL;
short var_12 = (short)-11978;
int var_13 = -596130748;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
