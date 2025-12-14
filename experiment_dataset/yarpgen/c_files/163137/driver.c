#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)68;
int var_2 = -846819665;
unsigned char var_4 = (unsigned char)135;
unsigned int var_6 = 3787459747U;
int var_8 = 509276670;
unsigned short var_9 = (unsigned short)38660;
unsigned short var_10 = (unsigned short)4831;
unsigned char var_11 = (unsigned char)154;
int zero = 0;
unsigned short var_12 = (unsigned short)63566;
int var_13 = -1706375021;
short var_14 = (short)-22161;
int arr_0 [15] [15] ;
unsigned char arr_2 [15] ;
unsigned long long int arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 1784409336;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 777366931272015654ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
