#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 14834753863771720382ULL;
unsigned int var_11 = 1230379799U;
int var_13 = 1018156243;
unsigned long long int var_14 = 1836462294699998560ULL;
unsigned short var_17 = (unsigned short)54932;
int zero = 0;
signed char var_18 = (signed char)118;
unsigned long long int var_19 = 318278410033114884ULL;
unsigned char var_20 = (unsigned char)165;
unsigned char arr_4 [16] ;
signed char arr_5 [16] ;
unsigned long long int arr_6 [16] [16] ;
unsigned short arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)125 : (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-67 : (signed char)105;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 5969242685491810379ULL : 11957126689466705976ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)194 : (unsigned short)26918;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
