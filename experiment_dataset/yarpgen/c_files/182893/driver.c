#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1925649606U;
short var_1 = (short)-22993;
short var_3 = (short)31136;
short var_4 = (short)-16969;
int var_9 = 51448490;
signed char var_10 = (signed char)-55;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)238;
unsigned short var_13 = (unsigned short)20951;
short var_14 = (short)27659;
unsigned short var_15 = (unsigned short)53023;
short var_16 = (short)-17953;
long long int var_17 = -8802350011169246809LL;
int zero = 0;
int var_18 = -1657397380;
long long int var_19 = 4561215203320080015LL;
unsigned int var_20 = 2651828235U;
int var_21 = 82117604;
int var_22 = -1369115191;
int var_23 = 2132839032;
unsigned int var_24 = 3639197516U;
short var_25 = (short)2874;
unsigned int var_26 = 3893256367U;
short var_27 = (short)28392;
signed char var_28 = (signed char)2;
int var_29 = -1920325004;
long long int var_30 = -6522647336820101119LL;
long long int arr_0 [22] ;
unsigned long long int arr_1 [22] ;
short arr_2 [22] ;
short arr_4 [22] [22] ;
unsigned int arr_5 [22] ;
short arr_10 [19] ;
int arr_9 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -5571158646798366665LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 12192349029031548810ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)16205;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-16564;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 547106340U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (short)-32689;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 87818276 : -1533347489;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
