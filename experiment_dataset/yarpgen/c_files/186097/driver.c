#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1885320716;
long long int var_1 = 6743649898609510755LL;
_Bool var_2 = (_Bool)1;
short var_3 = (short)27949;
unsigned short var_4 = (unsigned short)22722;
int var_5 = 1078446240;
long long int var_6 = 3063196613765880712LL;
int var_7 = 498208754;
int var_8 = -1082082913;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 2460955048U;
int zero = 0;
int var_11 = 1178069409;
unsigned int var_12 = 430244898U;
int var_13 = 1757012781;
long long int var_14 = -1984636458630671643LL;
int var_15 = -2091269011;
unsigned short var_16 = (unsigned short)2259;
unsigned int var_17 = 2363919747U;
_Bool var_18 = (_Bool)1;
int var_19 = -783520521;
unsigned int arr_0 [13] ;
long long int arr_1 [13] ;
signed char arr_2 [13] ;
unsigned long long int arr_3 [13] ;
unsigned char arr_4 [13] [13] ;
int arr_6 [13] [13] [13] [13] ;
_Bool arr_9 [13] [13] ;
unsigned short arr_11 [13] ;
short arr_12 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1182586413U : 1881502U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -4354530594084661106LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 8489627012312099524ULL : 4325462766608097223ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 418912684;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)53943 : (unsigned short)24184;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-2443 : (short)25230;
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
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
