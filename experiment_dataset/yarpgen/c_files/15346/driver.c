#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)556;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)50;
short var_12 = (short)-6952;
unsigned long long int var_14 = 9073701049190314424ULL;
int var_15 = 179493698;
unsigned long long int var_16 = 11453979408125525632ULL;
unsigned long long int var_17 = 2856562311440408842ULL;
int var_19 = -152456419;
int zero = 0;
unsigned long long int var_20 = 14052056300868309048ULL;
signed char var_21 = (signed char)43;
unsigned int var_22 = 3691403884U;
unsigned short var_23 = (unsigned short)2944;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
