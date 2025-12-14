#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1916070096;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)184;
unsigned short var_11 = (unsigned short)49901;
unsigned long long int var_18 = 10998300804981012288ULL;
int zero = 0;
signed char var_19 = (signed char)-84;
long long int var_20 = -5688717957458156277LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
