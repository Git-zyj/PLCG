#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4200728407006595906LL;
unsigned short var_1 = (unsigned short)59227;
long long int var_3 = -311552479683765166LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 3980191157702223095ULL;
short var_6 = (short)15515;
short var_7 = (short)16865;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)214;
int var_11 = -1536883638;
int zero = 0;
unsigned char var_12 = (unsigned char)196;
unsigned int var_13 = 1010033246U;
unsigned long long int var_14 = 6264362482711519950ULL;
unsigned int var_15 = 2232050946U;
int var_16 = 715703768;
unsigned char var_17 = (unsigned char)69;
unsigned char var_18 = (unsigned char)203;
unsigned char var_19 = (unsigned char)217;
unsigned char var_20 = (unsigned char)194;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)87;
unsigned char var_23 = (unsigned char)120;
int var_24 = -1723547435;
int arr_1 [12] [12] ;
int arr_2 [12] ;
unsigned short arr_3 [12] ;
int arr_6 [19] [19] ;
unsigned long long int arr_8 [19] ;
unsigned short arr_15 [12] [12] [12] ;
short arr_4 [12] ;
int arr_9 [19] ;
long long int arr_19 [12] [12] ;
unsigned long long int arr_20 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -1724826119;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 669157342;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)43216;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = -18930097;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 12765217834549236862ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)35586 : (unsigned short)44455;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (short)-9926;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = -183924691;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? 2313958058625546277LL : -5481002097162137443LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 15772190788432648805ULL : 11764436784139160541ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
