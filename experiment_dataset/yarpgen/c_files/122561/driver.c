#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)23498;
unsigned short var_6 = (unsigned short)61182;
_Bool var_7 = (_Bool)1;
int var_8 = -1910535803;
short var_10 = (short)-27156;
unsigned short var_11 = (unsigned short)60207;
short var_12 = (short)7166;
short var_13 = (short)-31184;
long long int var_15 = 8930744945871387473LL;
long long int var_18 = -6214815859888080019LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-12;
short var_21 = (short)22972;
unsigned int var_22 = 2019460583U;
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
