#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15896;
unsigned char var_2 = (unsigned char)232;
long long int var_4 = -1047707684714965862LL;
unsigned long long int var_5 = 2568972944822242261ULL;
int var_8 = -128346640;
unsigned short var_9 = (unsigned short)58432;
int var_13 = 1341333678;
unsigned long long int var_15 = 11625214921056621973ULL;
int var_16 = 2019150887;
int zero = 0;
unsigned short var_19 = (unsigned short)5828;
short var_20 = (short)8620;
unsigned long long int var_21 = 15131203638727442801ULL;
unsigned short var_22 = (unsigned short)15411;
unsigned long long int var_23 = 5334500569503084718ULL;
unsigned char var_24 = (unsigned char)51;
unsigned int var_25 = 895118629U;
short var_26 = (short)22559;
int arr_0 [19] [19] ;
_Bool arr_1 [19] ;
long long int arr_2 [15] ;
unsigned long long int arr_4 [15] ;
int arr_5 [15] ;
_Bool arr_10 [12] [12] [12] ;
int arr_12 [12] [12] ;
unsigned short arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -1644761823;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -2904564465660903640LL : -1200735017424578002LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 15552701545171196171ULL : 17661795987589690229ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 1608050478;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = -247925180;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)35764 : (unsigned short)24035;
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
