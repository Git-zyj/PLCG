#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)36843;
signed char var_2 = (signed char)-76;
signed char var_4 = (signed char)-29;
int var_6 = -367168244;
unsigned short var_7 = (unsigned short)35972;
long long int var_8 = -8150286114745369589LL;
long long int var_9 = 848648057572002131LL;
signed char var_10 = (signed char)72;
long long int var_11 = 1623838655649216015LL;
signed char var_12 = (signed char)18;
unsigned short var_14 = (unsigned short)58958;
signed char var_15 = (signed char)-77;
unsigned long long int var_16 = 13105356418924186930ULL;
int zero = 0;
short var_18 = (short)-22698;
short var_19 = (short)-28058;
unsigned long long int var_20 = 11683798859907938551ULL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
unsigned short arr_1 [14] [14] ;
short arr_3 [15] ;
_Bool arr_4 [15] [15] ;
unsigned long long int arr_7 [16] ;
_Bool arr_8 [16] ;
unsigned long long int arr_2 [14] [14] ;
unsigned long long int arr_5 [15] ;
_Bool arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)22302 : (unsigned short)11304;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)-30228;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 6017272513909991914ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 13174496427823926931ULL : 13832138699684195902ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 8307234337717725001ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
