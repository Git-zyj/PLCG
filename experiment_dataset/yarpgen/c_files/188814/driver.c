#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1563012348;
unsigned int var_2 = 187481018U;
unsigned int var_6 = 2172396814U;
unsigned short var_7 = (unsigned short)12083;
unsigned int var_10 = 4040630718U;
short var_12 = (short)-19046;
unsigned short var_13 = (unsigned short)29307;
_Bool var_15 = (_Bool)1;
short var_17 = (short)-3680;
unsigned char var_18 = (unsigned char)82;
int zero = 0;
unsigned short var_19 = (unsigned short)32548;
short var_20 = (short)15718;
unsigned short var_21 = (unsigned short)19415;
unsigned char arr_0 [21] ;
unsigned int arr_1 [21] ;
long long int arr_5 [21] [21] ;
unsigned int arr_6 [21] [21] [21] ;
unsigned int arr_7 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 3647150139U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -2900640422298303005LL : -8855809630389258207LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2869459349U : 4041040668U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4140043163U : 809118931U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
