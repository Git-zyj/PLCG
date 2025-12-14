#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 98116010U;
unsigned int var_2 = 3147221152U;
signed char var_4 = (signed char)107;
unsigned char var_5 = (unsigned char)114;
short var_6 = (short)-25581;
unsigned long long int var_7 = 12840391953846707044ULL;
signed char var_8 = (signed char)-79;
unsigned char var_9 = (unsigned char)235;
unsigned char var_12 = (unsigned char)177;
int zero = 0;
signed char var_13 = (signed char)-126;
short var_14 = (short)-27378;
unsigned long long int var_15 = 5141682080875894024ULL;
unsigned long long int var_16 = 10042998618823657897ULL;
unsigned long long int var_17 = 13522595886019784912ULL;
unsigned char arr_0 [22] [22] ;
unsigned char arr_1 [22] [22] ;
short arr_4 [25] [25] [25] ;
unsigned long long int arr_7 [25] ;
long long int arr_9 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-3568;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 3647682352804150656ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? -7907743671747058603LL : -173344967360606342LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
