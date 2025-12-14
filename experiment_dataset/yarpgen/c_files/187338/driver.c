#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 798188119;
unsigned short var_3 = (unsigned short)63664;
signed char var_7 = (signed char)77;
unsigned long long int var_11 = 7317926261080042916ULL;
int var_13 = 594679310;
unsigned int var_14 = 3860465794U;
int zero = 0;
unsigned long long int var_15 = 16724763930430721824ULL;
unsigned char var_16 = (unsigned char)204;
_Bool var_17 = (_Bool)1;
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
