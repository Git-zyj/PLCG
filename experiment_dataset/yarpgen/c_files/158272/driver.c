#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)39754;
unsigned int var_5 = 1310637209U;
unsigned int var_8 = 3052205315U;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-32;
unsigned int var_14 = 1585877587U;
void init() {
}

void checksum() {
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
