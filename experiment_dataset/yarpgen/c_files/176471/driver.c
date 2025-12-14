#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 12421427606142336873ULL;
unsigned int var_7 = 1016387019U;
unsigned int var_9 = 3265752401U;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)175;
unsigned long long int var_14 = 15516008302112888155ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)17907;
signed char var_17 = (signed char)-67;
int var_18 = -1773509034;
unsigned char var_19 = (unsigned char)188;
long long int var_20 = 369154176465240255LL;
unsigned char var_21 = (unsigned char)102;
short arr_0 [10] ;
short arr_1 [10] ;
unsigned long long int arr_2 [10] [10] [10] ;
_Bool arr_3 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)-1234;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-17996;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 11665849296614873402ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
