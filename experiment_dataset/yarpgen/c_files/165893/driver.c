#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)1;
signed char var_8 = (signed char)29;
unsigned long long int var_9 = 1592572811525216764ULL;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)70;
int zero = 0;
short var_12 = (short)18240;
short var_13 = (short)-9190;
signed char var_14 = (signed char)18;
signed char var_15 = (signed char)-40;
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
