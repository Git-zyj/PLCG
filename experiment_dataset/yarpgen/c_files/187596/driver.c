#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)56404;
unsigned int var_9 = 3870468679U;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2419864598U;
int zero = 0;
unsigned long long int var_15 = 1482881475245746343ULL;
unsigned short var_16 = (unsigned short)26381;
void init() {
}

void checksum() {
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
