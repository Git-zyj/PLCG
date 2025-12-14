#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2890645514U;
short var_4 = (short)-14970;
signed char var_5 = (signed char)-32;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)200;
short var_11 = (short)-5367;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)56;
unsigned char var_14 = (unsigned char)108;
long long int var_15 = 4819393981274360295LL;
unsigned int var_16 = 2405571227U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
