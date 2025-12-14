#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)135;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 2104770912U;
unsigned int var_13 = 1827608833U;
unsigned char var_15 = (unsigned char)216;
long long int var_16 = -4732977588638335135LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_19 = 1214066965;
signed char var_20 = (signed char)56;
unsigned short var_21 = (unsigned short)39668;
unsigned short var_22 = (unsigned short)51740;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
