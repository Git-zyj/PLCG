#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)61201;
unsigned char var_3 = (unsigned char)51;
unsigned char var_4 = (unsigned char)244;
unsigned int var_5 = 741642884U;
unsigned long long int var_6 = 9326016681311176853ULL;
long long int var_7 = -5502648814613271809LL;
unsigned short var_8 = (unsigned short)65488;
unsigned short var_9 = (unsigned short)28011;
signed char var_10 = (signed char)112;
int zero = 0;
unsigned char var_11 = (unsigned char)104;
unsigned char var_12 = (unsigned char)212;
unsigned short var_13 = (unsigned short)15044;
unsigned short var_14 = (unsigned short)49877;
unsigned char var_15 = (unsigned char)9;
unsigned long long int arr_0 [25] ;
unsigned int arr_1 [25] ;
unsigned int arr_2 [25] ;
unsigned short arr_3 [25] [25] ;
unsigned char arr_4 [25] [25] [25] [25] ;
long long int arr_6 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 17903780759021464898ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 539348045U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 1132832763U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)37338;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -2237731343178341428LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
