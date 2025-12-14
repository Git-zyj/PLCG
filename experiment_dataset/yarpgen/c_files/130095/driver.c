#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4889565968984030358LL;
unsigned long long int var_3 = 5641220412777581282ULL;
unsigned char var_6 = (unsigned char)182;
unsigned int var_7 = 300152004U;
unsigned long long int var_12 = 17229315875209613563ULL;
signed char var_13 = (signed char)-127;
int var_15 = 525675455;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)71;
long long int var_20 = 7695631400741712687LL;
unsigned int var_21 = 2352592177U;
short arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)31752 : (short)-24811;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
