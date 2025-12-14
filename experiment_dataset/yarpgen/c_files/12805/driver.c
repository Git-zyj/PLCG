#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)59829;
_Bool var_5 = (_Bool)1;
int var_8 = 1557147594;
unsigned char var_11 = (unsigned char)61;
int zero = 0;
unsigned char var_16 = (unsigned char)16;
unsigned char var_17 = (unsigned char)189;
signed char var_18 = (signed char)56;
_Bool var_19 = (_Bool)0;
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
