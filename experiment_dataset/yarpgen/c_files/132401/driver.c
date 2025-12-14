#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)9;
unsigned int var_2 = 2602734961U;
unsigned int var_4 = 623600813U;
unsigned int var_7 = 94649928U;
int zero = 0;
unsigned int var_11 = 3336457567U;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)60;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)162;
unsigned char var_16 = (unsigned char)108;
unsigned short var_17 = (unsigned short)27710;
unsigned long long int var_18 = 5437904985191836845ULL;
unsigned short var_19 = (unsigned short)13463;
_Bool var_20 = (_Bool)0;
signed char arr_0 [24] [24] ;
unsigned int arr_2 [24] ;
signed char arr_3 [24] [24] ;
unsigned char arr_4 [24] [24] [24] ;
_Bool arr_7 [24] [24] [24] ;
unsigned int arr_10 [22] ;
unsigned int arr_11 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)82 : (signed char)111;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 2613151563U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-86 : (signed char)-74;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 3051234093U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = 430804125U;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
