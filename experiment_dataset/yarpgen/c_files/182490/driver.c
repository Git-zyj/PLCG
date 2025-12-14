#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)9943;
int var_4 = 257008859;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned short var_11 = (unsigned short)18234;
unsigned short var_12 = (unsigned short)56162;
signed char var_15 = (signed char)-85;
signed char var_16 = (signed char)-67;
int zero = 0;
signed char var_20 = (signed char)-123;
unsigned short var_21 = (unsigned short)49340;
unsigned int var_22 = 2018183979U;
void init() {
}

void checksum() {
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
