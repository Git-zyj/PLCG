#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3233151416U;
unsigned char var_8 = (unsigned char)15;
int var_9 = 1263437806;
int zero = 0;
signed char var_14 = (signed char)-122;
long long int var_15 = -6054246546016031744LL;
short var_16 = (short)-27653;
unsigned short var_17 = (unsigned short)61986;
long long int var_18 = 3713549199361086073LL;
long long int var_19 = 605519888683093542LL;
long long int var_20 = -3537987660205257980LL;
unsigned int arr_0 [14] ;
signed char arr_1 [14] [14] ;
unsigned int arr_2 [14] ;
long long int arr_3 [14] ;
long long int arr_4 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 4287874242U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2236059470U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -7991108597029204820LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -9004914013967110833LL : -6679621916942610867LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
