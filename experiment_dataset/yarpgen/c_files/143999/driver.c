#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)179;
signed char var_3 = (signed char)88;
int var_6 = -1609870348;
_Bool var_7 = (_Bool)0;
int var_9 = 1918676163;
int var_10 = -965936139;
signed char var_12 = (signed char)-5;
long long int var_13 = 9161842434764619433LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 4761803504796600790LL;
int var_17 = 2032729116;
unsigned char var_18 = (unsigned char)5;
long long int var_19 = -4039616205420399510LL;
unsigned short var_20 = (unsigned short)36024;
int var_21 = -2128932886;
signed char var_22 = (signed char)-80;
short var_23 = (short)-14364;
signed char var_24 = (signed char)41;
long long int var_25 = 7253246765979764248LL;
_Bool var_26 = (_Bool)1;
unsigned char var_27 = (unsigned char)80;
unsigned int var_28 = 4137841514U;
signed char var_29 = (signed char)-71;
long long int var_30 = 5744614865778564803LL;
int var_31 = 1680540577;
short var_32 = (short)1352;
long long int var_33 = 1613531502427180255LL;
int var_34 = -122052385;
_Bool arr_1 [16] [16] ;
signed char arr_5 [16] ;
signed char arr_6 [16] [16] [16] ;
unsigned long long int arr_9 [16] [16] [16] [16] [16] [16] ;
unsigned int arr_12 [16] [16] [16] [16] [16] ;
unsigned short arr_14 [16] [16] [16] [16] [16] [16] ;
long long int arr_23 [13] ;
_Bool arr_26 [13] [13] [13] ;
signed char arr_30 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 10407713626993384324ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 1233879252U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)49392;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = -247342828765526241LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (signed char)93;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
