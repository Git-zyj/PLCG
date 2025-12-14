#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1494605115U;
unsigned short var_6 = (unsigned short)41237;
unsigned char var_7 = (unsigned char)51;
unsigned short var_11 = (unsigned short)36552;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)16534;
int zero = 0;
unsigned int var_16 = 2400295878U;
unsigned short var_17 = (unsigned short)39395;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1713068485U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
