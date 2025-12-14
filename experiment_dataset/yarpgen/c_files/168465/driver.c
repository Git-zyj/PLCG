#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)28;
signed char var_1 = (signed char)119;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)63275;
unsigned short var_6 = (unsigned short)53701;
unsigned char var_8 = (unsigned char)212;
unsigned long long int var_9 = 9029664915204185842ULL;
signed char var_10 = (signed char)78;
unsigned short var_13 = (unsigned short)3945;
signed char var_15 = (signed char)7;
unsigned int var_17 = 4063117422U;
int zero = 0;
signed char var_18 = (signed char)-101;
unsigned short var_19 = (unsigned short)48700;
unsigned short var_20 = (unsigned short)46474;
unsigned long long int var_21 = 14346745197196257418ULL;
unsigned int var_22 = 4020787331U;
signed char arr_1 [17] ;
unsigned int arr_5 [25] ;
unsigned char arr_6 [25] [25] ;
unsigned long long int arr_8 [17] [17] ;
short arr_2 [17] ;
long long int arr_3 [17] ;
short arr_4 [17] ;
unsigned char arr_7 [25] [25] ;
unsigned char arr_10 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 1323356315U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = 12769412403148526516ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)12263;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -1976788704567805973LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)-9698;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)45 : (unsigned char)219;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
