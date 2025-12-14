#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-114;
signed char var_1 = (signed char)-81;
unsigned int var_2 = 1692877961U;
signed char var_3 = (signed char)29;
signed char var_4 = (signed char)127;
short var_6 = (short)-12863;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)149;
int var_10 = -1218409864;
short var_11 = (short)21789;
unsigned short var_12 = (unsigned short)51526;
int zero = 0;
signed char var_13 = (signed char)41;
unsigned char var_14 = (unsigned char)12;
unsigned char var_15 = (unsigned char)55;
unsigned long long int var_16 = 17036199115933059867ULL;
int arr_0 [19] [19] ;
unsigned long long int arr_1 [19] ;
long long int arr_3 [24] ;
unsigned char arr_5 [24] ;
signed char arr_2 [19] [19] ;
unsigned char arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -1006312732;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 7300435687113460508ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 4318937346067021024LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned char)161;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
