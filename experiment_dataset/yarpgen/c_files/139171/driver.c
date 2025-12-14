#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-9;
int var_4 = 155315583;
unsigned long long int var_8 = 11165285109094961410ULL;
unsigned int var_11 = 565722329U;
unsigned char var_13 = (unsigned char)35;
int zero = 0;
signed char var_15 = (signed char)5;
unsigned int var_16 = 424411919U;
unsigned short var_17 = (unsigned short)8268;
unsigned long long int var_18 = 8812979733616710001ULL;
long long int var_19 = -6620220562939088106LL;
signed char var_20 = (signed char)48;
unsigned long long int var_21 = 3191103358973257273ULL;
unsigned long long int var_22 = 2460811347802984718ULL;
unsigned short arr_0 [25] ;
short arr_1 [25] ;
_Bool arr_3 [25] [25] ;
unsigned short arr_6 [25] [25] ;
signed char arr_7 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)10609;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)13333;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)13729;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-120;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
