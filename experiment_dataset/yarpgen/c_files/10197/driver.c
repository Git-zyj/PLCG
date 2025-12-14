#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)108;
unsigned long long int var_1 = 11499121415551877123ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 8975999796969341664ULL;
short var_5 = (short)17497;
unsigned char var_7 = (unsigned char)131;
unsigned long long int var_8 = 8057675293790671638ULL;
short var_9 = (short)8762;
signed char var_10 = (signed char)29;
unsigned short var_11 = (unsigned short)40621;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-99;
unsigned long long int var_14 = 14314867219855908894ULL;
signed char var_16 = (signed char)-23;
unsigned int var_17 = 1520753352U;
int zero = 0;
unsigned short var_18 = (unsigned short)26794;
unsigned char var_19 = (unsigned char)205;
unsigned int var_20 = 1621630808U;
unsigned short var_21 = (unsigned short)36171;
short var_22 = (short)-4308;
signed char var_23 = (signed char)-7;
signed char var_24 = (signed char)11;
signed char var_25 = (signed char)3;
unsigned short var_26 = (unsigned short)60142;
unsigned int var_27 = 3694985748U;
short arr_0 [17] [17] ;
unsigned char arr_1 [17] ;
unsigned long long int arr_3 [10] [10] ;
unsigned char arr_4 [10] [10] ;
unsigned long long int arr_7 [18] ;
unsigned long long int arr_8 [18] ;
unsigned char arr_5 [10] [10] ;
unsigned char arr_9 [18] ;
short arr_10 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (short)32211;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 7376994890739253674ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 6897247552428541816ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 16432896745913018908ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)143 : (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (short)1462;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
