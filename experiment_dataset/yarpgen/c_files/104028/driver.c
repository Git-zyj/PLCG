#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1844373936;
int var_3 = 1011362492;
unsigned long long int var_9 = 9177414167530264499ULL;
int var_11 = -575026029;
signed char var_12 = (signed char)-111;
long long int var_13 = -6860099022224570316LL;
int zero = 0;
int var_15 = 637428995;
long long int var_16 = -8713421615873366220LL;
signed char var_17 = (signed char)-72;
long long int var_18 = 2328359199344992219LL;
unsigned short var_19 = (unsigned short)33492;
signed char var_20 = (signed char)38;
unsigned short var_21 = (unsigned short)31731;
unsigned long long int arr_2 [18] [18] ;
_Bool arr_3 [18] ;
unsigned char arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 10318940213969752807ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)70 : (unsigned char)124;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
