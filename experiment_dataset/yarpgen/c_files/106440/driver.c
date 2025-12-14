#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)20;
signed char var_2 = (signed char)121;
long long int var_3 = -3589553331325645167LL;
unsigned int var_5 = 1784602502U;
short var_6 = (short)21664;
short var_7 = (short)9680;
signed char var_8 = (signed char)-56;
unsigned char var_9 = (unsigned char)77;
unsigned long long int var_10 = 6754056936715738518ULL;
unsigned long long int var_11 = 12676057060765221508ULL;
unsigned int var_12 = 1852310772U;
unsigned long long int var_14 = 3759910816799273719ULL;
int zero = 0;
signed char var_15 = (signed char)93;
unsigned int var_16 = 1641472311U;
long long int var_17 = -6496607647362186056LL;
long long int var_18 = 1158669723819468897LL;
unsigned long long int var_19 = 8303203135001157023ULL;
unsigned long long int var_20 = 5836354746031760738ULL;
unsigned char arr_0 [14] ;
unsigned int arr_2 [14] ;
long long int arr_6 [14] ;
unsigned char arr_9 [14] [14] ;
short arr_14 [14] [14] [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)243 : (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 111053467U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 4802262440969941349LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? (short)-22041 : (short)7283;
}

void checksum() {
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
