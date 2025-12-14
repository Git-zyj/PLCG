#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-19051;
unsigned short var_6 = (unsigned short)11933;
unsigned short var_9 = (unsigned short)2434;
unsigned long long int var_10 = 8246549663995202387ULL;
int zero = 0;
signed char var_12 = (signed char)-57;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
