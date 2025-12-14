#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
short var_8 = (short)31219;
unsigned short var_9 = (unsigned short)7467;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 1821578432U;
short var_12 = (short)26718;
signed char var_13 = (signed char)-96;
unsigned long long int var_14 = 7428181635522043500ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
