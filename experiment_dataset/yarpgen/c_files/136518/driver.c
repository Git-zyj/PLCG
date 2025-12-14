#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11287459847792669264ULL;
unsigned long long int var_11 = 1786250853960103107ULL;
unsigned long long int var_12 = 2670554323819381369ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)129;
unsigned long long int var_14 = 4444844280125125049ULL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)45651;
unsigned char var_17 = (unsigned char)83;
long long int arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 5592652209264521621LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
