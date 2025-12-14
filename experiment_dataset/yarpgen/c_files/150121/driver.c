#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1115567205993905314LL;
unsigned char var_3 = (unsigned char)214;
unsigned int var_5 = 1677071470U;
unsigned short var_10 = (unsigned short)47984;
long long int var_11 = -8017669756411545675LL;
unsigned short var_14 = (unsigned short)26338;
unsigned short var_16 = (unsigned short)1615;
int zero = 0;
int var_17 = -750830630;
unsigned int var_18 = 205399086U;
long long int var_19 = -7798529581099323404LL;
unsigned short var_20 = (unsigned short)41889;
short var_21 = (short)-23172;
signed char var_22 = (signed char)34;
short var_23 = (short)24106;
short var_24 = (short)-3486;
signed char var_25 = (signed char)85;
unsigned char var_26 = (unsigned char)28;
unsigned char arr_1 [25] ;
unsigned int arr_3 [25] [25] ;
signed char arr_4 [25] [25] ;
unsigned char arr_5 [25] ;
unsigned char arr_11 [25] ;
long long int arr_19 [25] [25] [25] [25] ;
long long int arr_21 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 3168373098U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 7022034740545701587LL : -8849810143553853712LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = 2377892130002086076LL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
