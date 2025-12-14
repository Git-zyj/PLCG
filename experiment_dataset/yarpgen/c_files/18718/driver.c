#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)227;
unsigned int var_1 = 737411580U;
int var_2 = 1405432060;
int var_4 = -382651663;
unsigned char var_5 = (unsigned char)128;
unsigned char var_6 = (unsigned char)214;
unsigned char var_7 = (unsigned char)167;
signed char var_8 = (signed char)-28;
unsigned short var_9 = (unsigned short)45867;
unsigned long long int var_10 = 3117998777719297301ULL;
long long int var_11 = -6165799853526220514LL;
unsigned long long int var_12 = 3740900837090122643ULL;
int zero = 0;
unsigned long long int var_15 = 11492211464739126411ULL;
unsigned int var_16 = 3651466450U;
int var_17 = 915442804;
unsigned char var_18 = (unsigned char)223;
unsigned int var_19 = 3969410721U;
unsigned char var_20 = (unsigned char)40;
unsigned int var_21 = 1073533406U;
_Bool var_22 = (_Bool)0;
short var_23 = (short)14425;
signed char var_24 = (signed char)63;
unsigned char var_25 = (unsigned char)215;
long long int var_26 = 2742672186424631132LL;
unsigned int var_27 = 4013776578U;
short var_28 = (short)27911;
signed char var_29 = (signed char)15;
long long int var_30 = -1441514113972092497LL;
unsigned int var_31 = 624204098U;
signed char var_32 = (signed char)-65;
long long int arr_1 [14] ;
unsigned long long int arr_2 [14] ;
_Bool arr_3 [14] [14] ;
unsigned char arr_4 [14] [14] [14] ;
unsigned char arr_5 [14] [14] ;
signed char arr_6 [14] ;
unsigned short arr_7 [14] [14] [14] [14] ;
signed char arr_12 [14] ;
unsigned char arr_8 [14] [14] [14] ;
signed char arr_13 [14] ;
unsigned char arr_14 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2667078407214590054LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 7538983400269276309ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)119 : (signed char)63;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)34745;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)3 : (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)-118 : (signed char)-118;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)131 : (unsigned char)209;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
