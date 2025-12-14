#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13717112276082700852ULL;
unsigned short var_2 = (unsigned short)7133;
short var_3 = (short)14275;
unsigned char var_5 = (unsigned char)82;
unsigned short var_6 = (unsigned short)1457;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 9134654999906290265ULL;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)45192;
int var_12 = -462586567;
int zero = 0;
unsigned int var_13 = 2785285180U;
unsigned char var_14 = (unsigned char)123;
int var_15 = 338584369;
unsigned char var_16 = (unsigned char)11;
signed char var_17 = (signed char)121;
unsigned int var_18 = 1243845205U;
unsigned char arr_0 [21] ;
unsigned short arr_2 [21] [21] ;
unsigned long long int arr_4 [21] [21] ;
unsigned short arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)37636;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 13860544256054866119ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)45855;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
