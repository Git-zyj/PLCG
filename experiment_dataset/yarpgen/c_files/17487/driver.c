#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3609409956U;
unsigned short var_3 = (unsigned short)40043;
unsigned int var_6 = 942469798U;
unsigned int var_8 = 1377650183U;
signed char var_11 = (signed char)40;
signed char var_12 = (signed char)31;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)21;
unsigned long long int var_16 = 6061850391123235665ULL;
unsigned long long int var_17 = 2654987589789217192ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
