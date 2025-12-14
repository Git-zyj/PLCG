#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2643995496U;
_Bool var_1 = (_Bool)0;
unsigned int var_3 = 1365200206U;
unsigned char var_4 = (unsigned char)48;
unsigned long long int var_5 = 11279518168759675990ULL;
short var_6 = (short)19255;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)250;
long long int var_9 = -4332244290144755575LL;
unsigned char var_10 = (unsigned char)178;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)62581;
unsigned int var_13 = 794303106U;
unsigned char var_14 = (unsigned char)199;
unsigned short var_15 = (unsigned short)22528;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
