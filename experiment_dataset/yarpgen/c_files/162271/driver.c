#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)61739;
short var_7 = (short)-14264;
unsigned short var_8 = (unsigned short)57092;
unsigned char var_9 = (unsigned char)125;
short var_11 = (short)22875;
short var_13 = (short)-12400;
unsigned char var_14 = (unsigned char)166;
int var_17 = -24025699;
unsigned short var_19 = (unsigned short)8780;
int zero = 0;
unsigned char var_20 = (unsigned char)220;
unsigned char var_21 = (unsigned char)192;
unsigned long long int var_22 = 13163994562172407175ULL;
short var_23 = (short)22688;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)8162;
unsigned int arr_1 [11] [11] ;
long long int arr_2 [11] [11] [11] ;
unsigned short arr_5 [11] ;
long long int arr_6 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 409698217U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1553881593059426198LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)597;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 2224583269784604538LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
