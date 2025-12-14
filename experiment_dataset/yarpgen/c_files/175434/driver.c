#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16026;
unsigned short var_2 = (unsigned short)4442;
unsigned char var_3 = (unsigned char)191;
short var_6 = (short)9571;
unsigned char var_7 = (unsigned char)18;
signed char var_8 = (signed char)-12;
unsigned long long int var_9 = 15128922500842791479ULL;
unsigned char var_11 = (unsigned char)29;
unsigned char var_13 = (unsigned char)131;
int var_14 = 1195161314;
short var_15 = (short)31584;
int zero = 0;
unsigned char var_17 = (unsigned char)109;
int var_18 = -1621217720;
int var_19 = -242282126;
unsigned short var_20 = (unsigned short)37909;
signed char var_21 = (signed char)5;
int var_22 = -1422740114;
short var_23 = (short)5854;
int var_24 = 1268945637;
unsigned char var_25 = (unsigned char)102;
unsigned char var_26 = (unsigned char)208;
unsigned char arr_0 [20] ;
short arr_1 [20] ;
signed char arr_3 [20] [20] ;
unsigned char arr_4 [20] [20] [20] ;
unsigned char arr_15 [13] [13] ;
unsigned long long int arr_17 [13] ;
signed char arr_5 [20] [20] ;
unsigned int arr_6 [20] [20] ;
short arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)-17735;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-79;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = 15970779270969771038ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = 1710257478U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (short)-6650;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
