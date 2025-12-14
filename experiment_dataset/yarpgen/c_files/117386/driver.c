#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 137530588562808155ULL;
signed char var_3 = (signed char)18;
short var_4 = (short)7623;
short var_5 = (short)30847;
unsigned long long int var_7 = 7013291103055424697ULL;
signed char var_9 = (signed char)-83;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2338885351U;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-36;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)103;
signed char var_20 = (signed char)-83;
unsigned short var_21 = (unsigned short)27210;
short var_22 = (short)-27205;
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
