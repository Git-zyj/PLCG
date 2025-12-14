#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)56162;
short var_3 = (short)-22097;
short var_4 = (short)-22670;
unsigned long long int var_5 = 11132059330130185925ULL;
unsigned int var_6 = 2195062151U;
unsigned char var_7 = (unsigned char)44;
short var_8 = (short)-24626;
signed char var_9 = (signed char)-86;
unsigned short var_10 = (unsigned short)52715;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)115;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)32;
unsigned long long int var_19 = 16028997924398390685ULL;
int zero = 0;
short var_20 = (short)-3132;
unsigned long long int var_21 = 13416968778060341217ULL;
short var_22 = (short)6028;
unsigned char var_23 = (unsigned char)64;
unsigned long long int var_24 = 17880028740277135206ULL;
signed char var_25 = (signed char)74;
unsigned int var_26 = 3009904643U;
signed char var_27 = (signed char)-51;
signed char var_28 = (signed char)4;
unsigned short var_29 = (unsigned short)20584;
short var_30 = (short)-26423;
unsigned int var_31 = 3876918946U;
_Bool var_32 = (_Bool)1;
unsigned long long int var_33 = 844478311397821867ULL;
unsigned long long int var_34 = 5926108960069629704ULL;
unsigned long long int var_35 = 108551996041173244ULL;
signed char var_36 = (signed char)85;
short var_37 = (short)-14602;
unsigned int arr_0 [24] [24] ;
signed char arr_1 [24] [24] ;
unsigned short arr_2 [24] [24] [24] ;
unsigned short arr_3 [24] [24] [24] ;
unsigned char arr_9 [12] [12] ;
unsigned short arr_11 [12] [12] [12] ;
unsigned short arr_14 [12] [12] ;
unsigned long long int arr_15 [12] [12] [12] ;
long long int arr_22 [13] ;
unsigned short arr_4 [24] ;
unsigned short arr_12 [12] ;
unsigned short arr_13 [12] [12] ;
unsigned char arr_16 [12] [12] ;
long long int arr_24 [13] ;
unsigned int arr_27 [13] [13] ;
unsigned long long int arr_28 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 2245737213U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)33113;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)19337 : (unsigned short)10469;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)27615;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)7482;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 565951192036624572ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = -4867016878858214866LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)57785 : (unsigned short)10094;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (unsigned short)53930;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)32942;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_24 [i_0] = -6319530906941548441LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_27 [i_0] [i_1] = 3214453049U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_28 [i_0] [i_1] = 12417694806045468802ULL;
}

void checksum() {
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
