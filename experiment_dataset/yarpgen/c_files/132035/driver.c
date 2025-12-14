#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 624113059;
unsigned char var_2 = (unsigned char)69;
unsigned short var_4 = (unsigned short)30335;
long long int var_5 = 1137653511304346989LL;
unsigned short var_6 = (unsigned short)36937;
short var_7 = (short)22364;
unsigned long long int var_8 = 6004889499823059610ULL;
signed char var_9 = (signed char)114;
unsigned short var_10 = (unsigned short)5915;
unsigned int var_11 = 2941253112U;
long long int var_12 = 3697125104784223902LL;
unsigned short var_13 = (unsigned short)39847;
unsigned short var_14 = (unsigned short)60002;
short var_15 = (short)31317;
int var_17 = 447815193;
long long int var_18 = -2394884370381325270LL;
int zero = 0;
unsigned short var_19 = (unsigned short)56282;
unsigned short var_20 = (unsigned short)4346;
int var_21 = -924309949;
unsigned int var_22 = 190379943U;
unsigned long long int arr_0 [10] [10] ;
unsigned short arr_1 [10] ;
signed char arr_2 [10] ;
unsigned char arr_4 [10] ;
unsigned short arr_6 [10] [10] ;
unsigned short arr_3 [10] [10] ;
unsigned int arr_7 [10] [10] [10] ;
unsigned long long int arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 17092828553335995088ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)56517;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)7143;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)47659;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2920195132U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 8213030299914294257ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
