#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12471550892411414824ULL;
unsigned int var_3 = 802402825U;
unsigned long long int var_11 = 10593678236755809620ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2091020013U;
short var_21 = (short)-31213;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
