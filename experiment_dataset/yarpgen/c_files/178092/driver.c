#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)186;
signed char var_1 = (signed char)100;
unsigned long long int var_2 = 11523960038451280742ULL;
int var_4 = -835574209;
unsigned char var_8 = (unsigned char)63;
signed char var_10 = (signed char)-51;
unsigned long long int var_13 = 17043004897841686140ULL;
unsigned long long int var_14 = 12805467024671772891ULL;
short var_15 = (short)-28525;
short var_16 = (short)-5449;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-32594;
short var_20 = (short)10491;
unsigned long long int var_21 = 16061329412764142303ULL;
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
