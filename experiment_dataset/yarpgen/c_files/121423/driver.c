#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)9482;
unsigned short var_5 = (unsigned short)42382;
unsigned short var_11 = (unsigned short)17549;
unsigned short var_12 = (unsigned short)8366;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 3114220873U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
