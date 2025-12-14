#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2018726040989902760LL;
unsigned long long int var_1 = 1033247043892941570ULL;
signed char var_11 = (signed char)-63;
unsigned long long int var_12 = 775218505967528743ULL;
int var_13 = 2006877756;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)39451;
unsigned long long int var_20 = 17506278881216419034ULL;
int var_21 = -1828652306;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
