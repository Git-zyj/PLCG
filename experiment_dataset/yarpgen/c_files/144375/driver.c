#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11529171453244492017ULL;
signed char var_4 = (signed char)-78;
unsigned short var_6 = (unsigned short)21497;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 2285013182U;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-127;
unsigned char var_18 = (unsigned char)166;
unsigned short var_19 = (unsigned short)39875;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
