#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15733195888948106593ULL;
unsigned long long int var_4 = 9909126986387923903ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)51;
int zero = 0;
unsigned short var_11 = (unsigned short)56847;
unsigned long long int var_12 = 15023863713858489339ULL;
short var_13 = (short)-6528;
short var_14 = (short)603;
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
