#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3732961939U;
_Bool var_1 = (_Bool)1;
unsigned int var_3 = 1442581883U;
unsigned short var_4 = (unsigned short)61163;
unsigned char var_5 = (unsigned char)0;
unsigned short var_6 = (unsigned short)22277;
unsigned long long int var_7 = 4506194017530836518ULL;
signed char var_9 = (signed char)-4;
int zero = 0;
unsigned int var_11 = 1514043234U;
signed char var_12 = (signed char)36;
unsigned char var_13 = (unsigned char)167;
short var_14 = (short)-32110;
unsigned int var_15 = 1113985131U;
unsigned short var_16 = (unsigned short)52205;
int arr_0 [20] [20] ;
signed char arr_1 [20] [20] ;
unsigned long long int arr_2 [15] ;
unsigned char arr_3 [15] ;
long long int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 1063095073;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2337067451910612645ULL : 2066928866180789557ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -2021184057679983235LL : -7264481465914103902LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
