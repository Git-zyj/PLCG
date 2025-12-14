#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59462;
unsigned short var_4 = (unsigned short)55536;
unsigned short var_5 = (unsigned short)40714;
unsigned int var_6 = 2866786522U;
short var_7 = (short)-773;
unsigned short var_8 = (unsigned short)11345;
unsigned char var_10 = (unsigned char)63;
unsigned short var_11 = (unsigned short)61330;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-25;
int zero = 0;
unsigned int var_15 = 4210524640U;
unsigned int var_16 = 3682260674U;
unsigned int var_17 = 2540967972U;
unsigned short var_18 = (unsigned short)41230;
short var_19 = (short)-23845;
short var_20 = (short)17763;
short var_21 = (short)9682;
unsigned char var_22 = (unsigned char)150;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 4105933350U;
unsigned char var_25 = (unsigned char)26;
unsigned char arr_0 [24] ;
signed char arr_1 [24] ;
short arr_2 [24] [24] ;
short arr_4 [11] ;
short arr_11 [25] ;
signed char arr_12 [25] [25] ;
_Bool arr_10 [11] ;
signed char arr_13 [25] ;
unsigned short arr_14 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)32762;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)-3831;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (short)21851;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)49883;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
