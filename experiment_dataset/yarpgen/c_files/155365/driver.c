#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -697527664;
unsigned char var_3 = (unsigned char)50;
int var_4 = -1432317192;
int var_5 = 256546280;
unsigned long long int var_6 = 3961161328335757473ULL;
unsigned long long int var_7 = 5588372742669804449ULL;
int var_8 = 1368032225;
int var_10 = -1211780781;
int zero = 0;
unsigned short var_11 = (unsigned short)56767;
signed char var_12 = (signed char)14;
signed char var_13 = (signed char)86;
unsigned long long int var_14 = 3845108760028052823ULL;
signed char var_15 = (signed char)96;
_Bool var_16 = (_Bool)1;
long long int var_17 = -2162814281642242831LL;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-54;
_Bool var_20 = (_Bool)0;
int var_21 = -1398024902;
long long int var_22 = 9221988616529616570LL;
_Bool arr_0 [14] ;
_Bool arr_2 [14] ;
unsigned int arr_6 [14] ;
_Bool arr_8 [18] ;
unsigned long long int arr_10 [18] [18] ;
int arr_12 [18] ;
unsigned char arr_13 [18] [18] [18] ;
int arr_14 [18] [18] [18] [18] ;
int arr_7 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1268753158U : 1975803630U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = 7373187562074690754ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = -1678752275;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = -952330622;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 1559941178 : -568545462;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
