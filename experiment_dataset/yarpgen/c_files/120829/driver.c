#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2971118555U;
short var_1 = (short)-11483;
unsigned char var_2 = (unsigned char)55;
unsigned long long int var_3 = 4235677889119331519ULL;
_Bool var_4 = (_Bool)0;
int var_5 = 2106544208;
long long int var_7 = -6285088097770584414LL;
unsigned int var_10 = 153375837U;
unsigned long long int var_12 = 1066852218169511291ULL;
unsigned long long int var_13 = 139756594940563072ULL;
int zero = 0;
int var_14 = 2100605150;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1962367449U;
unsigned char var_17 = (unsigned char)26;
short var_18 = (short)26560;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 769333667055867751ULL;
short var_21 = (short)-18370;
long long int var_22 = 4135919071070754216LL;
unsigned int var_23 = 3421013316U;
unsigned short var_24 = (unsigned short)64758;
unsigned long long int var_25 = 7097687621457483980ULL;
_Bool var_26 = (_Bool)1;
short arr_1 [18] [18] ;
unsigned short arr_2 [18] ;
unsigned long long int arr_3 [18] ;
unsigned long long int arr_4 [18] [18] [18] ;
unsigned long long int arr_5 [18] [18] [18] ;
unsigned int arr_14 [18] [18] [18] ;
short arr_15 [18] ;
short arr_17 [18] ;
int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (short)31215;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)28955;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 7086923414646000710ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3227050452898374566ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 14396754419855998972ULL : 2860689247146810836ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 165298912U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (short)23697;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (short)-13595 : (short)23160;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -208823863 : -1604293649;
}

void checksum() {
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
