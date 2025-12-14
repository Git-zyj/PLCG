#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2490128438U;
signed char var_2 = (signed char)-126;
short var_4 = (short)-6122;
unsigned char var_5 = (unsigned char)49;
unsigned short var_7 = (unsigned short)56302;
signed char var_9 = (signed char)120;
unsigned long long int var_10 = 5091510212934348511ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2266320592U;
short var_18 = (short)-20176;
unsigned char var_19 = (unsigned char)209;
_Bool var_20 = (_Bool)1;
long long int var_21 = 3707988277412620563LL;
long long int var_22 = 3582207021068987888LL;
_Bool var_23 = (_Bool)0;
unsigned char arr_2 [15] [15] [15] ;
int arr_4 [17] ;
unsigned long long int arr_5 [17] [17] ;
short arr_6 [17] [17] ;
signed char arr_7 [17] [17] ;
signed char arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 363764776;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 951028991208135189ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (short)17826;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (signed char)56;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
