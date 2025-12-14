#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
unsigned int var_2 = 2114695080U;
short var_3 = (short)-5241;
unsigned long long int var_6 = 8147577152890034210ULL;
unsigned long long int var_7 = 6553412775033161901ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)29854;
unsigned char var_12 = (unsigned char)136;
unsigned short var_13 = (unsigned short)26918;
unsigned short var_14 = (unsigned short)49471;
signed char var_15 = (signed char)111;
unsigned long long int var_16 = 14960434376490976528ULL;
unsigned short var_17 = (unsigned short)49018;
short var_18 = (short)-20403;
long long int var_19 = -2865958176881135751LL;
unsigned long long int arr_0 [13] ;
unsigned char arr_1 [13] [13] ;
long long int arr_4 [13] [13] ;
long long int arr_2 [13] ;
unsigned char arr_7 [13] ;
_Bool arr_8 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 17066061580981341577ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)175 : (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 7605481382766191823LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -9098535973433359630LL : 5068324357085122678LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
