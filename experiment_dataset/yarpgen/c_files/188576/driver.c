#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 6072855172830278258ULL;
unsigned long long int var_10 = 583619265959808184ULL;
int var_11 = 2115051796;
int zero = 0;
signed char var_12 = (signed char)88;
unsigned short var_13 = (unsigned short)42628;
_Bool var_14 = (_Bool)0;
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
