#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)44071;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 10124533517289845090ULL;
int var_9 = -1944975599;
_Bool var_10 = (_Bool)0;
int var_11 = 353482463;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 3613798508U;
short var_16 = (short)-26011;
signed char var_17 = (signed char)-92;
unsigned int var_18 = 456217131U;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 4025265759U;
unsigned char var_21 = (unsigned char)241;
short var_22 = (short)-23973;
unsigned int arr_0 [17] ;
signed char arr_2 [17] ;
unsigned char arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 645617120U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)252 : (unsigned char)157;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
