#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43394;
short var_2 = (short)-2826;
short var_4 = (short)13464;
unsigned char var_7 = (unsigned char)255;
long long int var_11 = -3777589478419534707LL;
short var_12 = (short)-10376;
unsigned long long int var_14 = 390273530413867843ULL;
int zero = 0;
long long int var_17 = 5178232845234790465LL;
int var_18 = -1721400714;
int var_19 = 49068639;
signed char var_20 = (signed char)-84;
unsigned int var_21 = 2807697926U;
unsigned int var_22 = 779774985U;
signed char arr_1 [12] ;
unsigned short arr_12 [15] ;
_Bool arr_15 [15] ;
_Bool arr_19 [15] [15] [15] [15] ;
int arr_10 [12] ;
unsigned short arr_16 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (unsigned short)46486;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = -682206219;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)33879 : (unsigned short)4217;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
