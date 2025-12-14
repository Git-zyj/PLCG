#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2067429741U;
int var_2 = 199226166;
unsigned short var_3 = (unsigned short)20070;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 333480691U;
unsigned short var_11 = (unsigned short)58169;
unsigned char var_12 = (unsigned char)122;
unsigned long long int var_13 = 11791632662210757169ULL;
_Bool var_14 = (_Bool)0;
long long int var_16 = 1335367009850752836LL;
int zero = 0;
long long int var_18 = -2326096414028107368LL;
signed char var_19 = (signed char)109;
unsigned short var_20 = (unsigned short)57143;
signed char var_21 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
