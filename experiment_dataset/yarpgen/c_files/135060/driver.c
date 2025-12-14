#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9700560478025531583ULL;
short var_2 = (short)29612;
unsigned int var_4 = 4261097401U;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 1416547841845596158ULL;
short var_9 = (short)3171;
unsigned long long int var_10 = 7952384154520993388ULL;
unsigned char var_11 = (unsigned char)128;
signed char var_12 = (signed char)-114;
unsigned int var_13 = 1268329006U;
unsigned int var_14 = 2093596317U;
unsigned long long int var_16 = 3045493459925518449ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)183;
unsigned int var_19 = 266047587U;
long long int var_20 = 6610444694149113116LL;
unsigned char var_21 = (unsigned char)83;
long long int var_22 = 7344707791347196322LL;
unsigned int var_23 = 2014680285U;
unsigned int var_24 = 762187295U;
unsigned char var_25 = (unsigned char)236;
_Bool var_26 = (_Bool)0;
unsigned short arr_0 [18] ;
short arr_3 [18] ;
unsigned int arr_5 [15] ;
_Bool arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)28744;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)14468;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 4116014852U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
