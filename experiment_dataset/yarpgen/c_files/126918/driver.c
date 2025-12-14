#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)199;
short var_2 = (short)1389;
_Bool var_3 = (_Bool)0;
long long int var_4 = 2217772427378301881LL;
unsigned int var_6 = 4192792308U;
int var_7 = -1759842108;
unsigned long long int var_8 = 14212942658832233006ULL;
unsigned int var_10 = 1234305049U;
unsigned short var_12 = (unsigned short)55203;
int var_14 = 1333695922;
int zero = 0;
short var_15 = (short)12691;
unsigned long long int var_16 = 7277666638876116404ULL;
long long int var_17 = -3513477904651783296LL;
unsigned int var_18 = 1099213645U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
