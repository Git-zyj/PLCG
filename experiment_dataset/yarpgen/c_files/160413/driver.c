#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)1731;
unsigned short var_5 = (unsigned short)62568;
unsigned long long int var_6 = 1843692905061609121ULL;
signed char var_7 = (signed char)-82;
unsigned long long int var_9 = 3778913233704735075ULL;
short var_10 = (short)-27685;
unsigned int var_12 = 1276350007U;
unsigned long long int var_13 = 11601379589102171613ULL;
int zero = 0;
short var_16 = (short)29154;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)18554;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-5384;
short var_21 = (short)-2593;
unsigned int arr_1 [10] ;
unsigned long long int arr_3 [10] [10] [10] ;
unsigned char arr_6 [10] [10] ;
unsigned short arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 2968005718U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3158390399825580961ULL : 16077769055387980983ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)121 : (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)22351 : (unsigned short)11661;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
