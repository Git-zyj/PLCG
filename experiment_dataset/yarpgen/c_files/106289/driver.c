#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1450;
short var_2 = (short)-28916;
short var_3 = (short)30225;
unsigned char var_4 = (unsigned char)74;
unsigned char var_5 = (unsigned char)50;
short var_6 = (short)31749;
unsigned char var_7 = (unsigned char)16;
short var_8 = (short)-11333;
unsigned long long int var_9 = 2337559982676168773ULL;
unsigned long long int var_10 = 8786344075932045519ULL;
unsigned char var_11 = (unsigned char)105;
int zero = 0;
unsigned int var_12 = 2017223154U;
unsigned short var_13 = (unsigned short)52406;
signed char var_14 = (signed char)-7;
unsigned short var_15 = (unsigned short)59837;
unsigned long long int var_16 = 2220930766133396234ULL;
int var_17 = -1792121649;
_Bool var_18 = (_Bool)0;
unsigned int arr_0 [17] ;
unsigned long long int arr_2 [17] [17] ;
long long int arr_3 [17] ;
unsigned short arr_4 [17] [17] [17] ;
int arr_5 [17] ;
short arr_6 [17] [17] ;
_Bool arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1307580937U : 3806275010U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 2336802229038585708ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 3561546693462970058LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)14880 : (unsigned short)15821;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 1213906051;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-26809 : (short)24739;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
