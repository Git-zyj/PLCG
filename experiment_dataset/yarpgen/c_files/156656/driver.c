#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)159;
unsigned char var_2 = (unsigned char)107;
unsigned short var_3 = (unsigned short)35142;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)5;
unsigned int var_9 = 2020490771U;
signed char var_11 = (signed char)70;
unsigned short var_13 = (unsigned short)5637;
int zero = 0;
short var_14 = (short)-25777;
unsigned short var_15 = (unsigned short)34198;
signed char var_16 = (signed char)-80;
int var_17 = 177605141;
long long int arr_0 [10] ;
unsigned long long int arr_5 [10] [10] ;
int arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 3761633612347898876LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 16362630219874336140ULL : 2162196508552111116ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = -175706974;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
