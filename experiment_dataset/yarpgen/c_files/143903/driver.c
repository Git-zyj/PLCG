#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_3 = (signed char)27;
unsigned int var_5 = 757941486U;
unsigned char var_6 = (unsigned char)157;
unsigned short var_8 = (unsigned short)17291;
short var_10 = (short)10103;
short var_11 = (short)7618;
unsigned long long int var_13 = 3449053879345230702ULL;
int zero = 0;
long long int var_18 = -351615589059902248LL;
unsigned char var_19 = (unsigned char)16;
signed char var_20 = (signed char)-86;
unsigned long long int var_21 = 354757435593620014ULL;
unsigned char var_22 = (unsigned char)6;
unsigned int var_23 = 2944234372U;
unsigned int var_24 = 1805227541U;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 7899284598250991447ULL;
short arr_0 [21] ;
int arr_2 [21] ;
unsigned int arr_3 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)5249;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1990854956;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 3025701180U;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
