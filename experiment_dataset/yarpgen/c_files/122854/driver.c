#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_3 = (_Bool)1;
long long int var_4 = -7999424941837805605LL;
unsigned long long int var_10 = 11128819292310813165ULL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)28564;
int zero = 0;
signed char var_18 = (signed char)-52;
unsigned int var_19 = 3023522906U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
