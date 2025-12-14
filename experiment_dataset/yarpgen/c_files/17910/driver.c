#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5789705290579057029ULL;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)59024;
unsigned short var_3 = (unsigned short)24175;
unsigned long long int var_5 = 4388924658832917062ULL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 14757552691834779267ULL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_16 = 10794714500202323946ULL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 2516743817378895074ULL;
unsigned short var_20 = (unsigned short)64205;
unsigned short var_21 = (unsigned short)8670;
unsigned long long int var_22 = 7161438586579221336ULL;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 10698700875769496501ULL;
unsigned long long int arr_0 [25] ;
unsigned short arr_1 [25] ;
_Bool arr_2 [25] ;
unsigned short arr_5 [25] [25] [25] ;
unsigned long long int arr_9 [16] [16] [16] ;
unsigned short arr_12 [16] [16] ;
_Bool arr_13 [16] [16] [16] ;
_Bool arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 375524221335172938ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)35638;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)54009;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2342026217716874447ULL : 4748364520803810833ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)16305 : (unsigned short)56257;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
