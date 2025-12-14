#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)112;
unsigned char var_1 = (unsigned char)121;
unsigned char var_2 = (unsigned char)56;
long long int var_5 = -8349442225195747997LL;
unsigned char var_6 = (unsigned char)100;
unsigned char var_7 = (unsigned char)172;
long long int var_8 = -325205477776177633LL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)33663;
unsigned short var_11 = (unsigned short)9383;
unsigned char var_12 = (unsigned char)142;
int zero = 0;
unsigned short var_13 = (unsigned short)14304;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)40296;
signed char var_16 = (signed char)40;
unsigned short var_17 = (unsigned short)11096;
unsigned short var_18 = (unsigned short)52184;
unsigned char var_19 = (unsigned char)238;
_Bool var_20 = (_Bool)0;
unsigned long long int arr_0 [19] ;
long long int arr_2 [19] ;
unsigned char arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 6979144680068853490ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 3312479120264801411LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned char)249;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
