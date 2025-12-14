#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3807055671U;
unsigned char var_1 = (unsigned char)151;
unsigned short var_3 = (unsigned short)26153;
unsigned int var_4 = 2318630441U;
unsigned int var_5 = 680370638U;
long long int var_7 = -4002065920680942469LL;
unsigned char var_8 = (unsigned char)190;
unsigned char var_9 = (unsigned char)74;
int zero = 0;
long long int var_10 = 5137797809072994921LL;
unsigned short var_11 = (unsigned short)4176;
long long int var_12 = 5670219228719020122LL;
long long int var_13 = 6968138722083717922LL;
unsigned short var_14 = (unsigned short)28789;
unsigned int var_15 = 2315084914U;
unsigned short var_16 = (unsigned short)56979;
unsigned char var_17 = (unsigned char)55;
unsigned short var_18 = (unsigned short)22769;
unsigned short var_19 = (unsigned short)47809;
unsigned short var_20 = (unsigned short)64560;
unsigned short var_21 = (unsigned short)14404;
long long int var_22 = 5785270729559418772LL;
unsigned int var_23 = 2230131025U;
unsigned int arr_0 [12] ;
unsigned short arr_1 [12] [12] ;
unsigned int arr_2 [12] [12] ;
unsigned char arr_3 [12] ;
unsigned int arr_4 [12] [12] ;
unsigned short arr_5 [12] ;
long long int arr_8 [16] ;
unsigned short arr_9 [16] [16] ;
unsigned char arr_10 [16] ;
unsigned short arr_12 [16] [16] ;
unsigned short arr_14 [16] ;
unsigned short arr_15 [16] ;
unsigned int arr_16 [16] [16] [16] ;
unsigned int arr_6 [12] [12] ;
unsigned int arr_7 [12] ;
unsigned int arr_13 [16] ;
unsigned int arr_17 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 163921063U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)55779;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 3916941930U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 610851439U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned short)21370;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 1256391313467713834LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)14013;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)42464;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned short)6119 : (unsigned short)2387;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = (unsigned short)60706;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2269545549U : 1401172074U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 1065995900U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 2013111504U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 4269377134U : 1944112463U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? 2175987630U : 1448121137U;
}

void checksum() {
    hash(&seed, var_10);
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
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
