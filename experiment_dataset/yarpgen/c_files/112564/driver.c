#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)188;
unsigned long long int var_2 = 2886185799033991915ULL;
unsigned int var_3 = 3730883791U;
unsigned int var_5 = 420111290U;
unsigned short var_6 = (unsigned short)33372;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 8344724358559556977ULL;
signed char var_11 = (signed char)-122;
unsigned short var_12 = (unsigned short)21124;
unsigned short var_13 = (unsigned short)46288;
unsigned int var_14 = 2382593721U;
unsigned int var_15 = 1230916106U;
long long int arr_3 [22] [22] ;
unsigned int arr_10 [15] ;
unsigned long long int arr_5 [22] [22] ;
unsigned long long int arr_12 [15] ;
long long int arr_13 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -4802063890914736849LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 1824277861U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 7879827525694035122ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = 9497875406529130109ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = -7956090459084422120LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
