#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6051764589044976196ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)30344;
unsigned short var_10 = (unsigned short)14318;
short var_11 = (short)2238;
unsigned char var_14 = (unsigned char)241;
unsigned short var_15 = (unsigned short)46828;
short var_16 = (short)6576;
signed char var_17 = (signed char)-127;
int zero = 0;
short var_18 = (short)-29704;
unsigned long long int var_19 = 6568480372881627261ULL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)42;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
