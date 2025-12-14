#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 470780102;
signed char var_3 = (signed char)74;
unsigned int var_4 = 175361753U;
signed char var_9 = (signed char)60;
unsigned short var_10 = (unsigned short)50064;
int zero = 0;
int var_11 = -317993363;
unsigned short var_12 = (unsigned short)30063;
signed char var_13 = (signed char)-65;
long long int var_14 = 7026470290882279843LL;
long long int var_15 = 7590816748742204882LL;
unsigned int var_16 = 2947806623U;
long long int arr_1 [24] [24] ;
unsigned short arr_3 [24] ;
unsigned short arr_4 [24] ;
unsigned short arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = -1091670740108710192LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)19360;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)29220;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)20489;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
