#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11178;
signed char var_1 = (signed char)-122;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)16408;
unsigned char var_9 = (unsigned char)17;
unsigned long long int var_10 = 15668045793236954385ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)-108;
unsigned int var_13 = 4176537884U;
unsigned short var_14 = (unsigned short)65535;
signed char var_15 = (signed char)69;
unsigned long long int var_16 = 4369760781581813961ULL;
unsigned short var_17 = (unsigned short)17031;
signed char var_18 = (signed char)-97;
unsigned long long int arr_3 [17] [17] ;
unsigned long long int arr_4 [17] ;
unsigned short arr_7 [22] ;
unsigned int arr_8 [22] ;
long long int arr_9 [22] ;
signed char arr_10 [22] ;
unsigned short arr_2 [10] ;
unsigned long long int arr_5 [17] ;
unsigned int arr_6 [17] ;
unsigned long long int arr_11 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 2340185589211626904ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 7492735089167807592ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned short)26886;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 3470261553U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 1734580732278105469LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)62639;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 2529437703970447101ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 3723962663U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = 9730830840566197565ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
