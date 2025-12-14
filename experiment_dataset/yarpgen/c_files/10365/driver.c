#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)114;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1642906127U;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)14;
unsigned short var_13 = (unsigned short)46585;
long long int var_14 = -5316255242815162208LL;
int zero = 0;
signed char var_15 = (signed char)115;
unsigned short var_16 = (unsigned short)23840;
signed char var_17 = (signed char)-102;
long long int var_18 = 4208605889292827242LL;
_Bool var_19 = (_Bool)1;
unsigned char arr_0 [17] ;
unsigned char arr_2 [17] ;
short arr_3 [17] [17] [17] ;
long long int arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-12510 : (short)14669;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 8517516281879474953LL : -67803047777640423LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
