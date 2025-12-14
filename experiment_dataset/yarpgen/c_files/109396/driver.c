#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)254;
long long int var_3 = 1917618954960284395LL;
unsigned short var_4 = (unsigned short)42328;
unsigned long long int var_13 = 15740196543294226520ULL;
int zero = 0;
unsigned long long int var_16 = 6412541891762064873ULL;
unsigned long long int var_17 = 7249883684854751942ULL;
unsigned long long int var_18 = 14546362318183831752ULL;
unsigned long long int var_19 = 12655636380533934647ULL;
long long int var_20 = 3855079569426135659LL;
unsigned char var_21 = (unsigned char)162;
unsigned char var_22 = (unsigned char)107;
long long int arr_1 [11] ;
unsigned short arr_2 [11] ;
unsigned char arr_3 [23] [23] ;
unsigned short arr_4 [23] ;
unsigned char arr_5 [23] [23] ;
unsigned long long int arr_8 [19] [19] ;
unsigned long long int arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1314870228218726487LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)42889;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)54741;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = 10941491210200938300ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 15341681719400162916ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
