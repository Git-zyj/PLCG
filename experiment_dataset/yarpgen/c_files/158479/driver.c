#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4216640488709684909LL;
short var_2 = (short)18538;
long long int var_3 = -469810160011341048LL;
long long int var_4 = -2116643575941748621LL;
unsigned long long int var_10 = 18336336791375651760ULL;
signed char var_14 = (signed char)110;
signed char var_16 = (signed char)58;
short var_18 = (short)-26274;
int zero = 0;
unsigned char var_19 = (unsigned char)120;
unsigned char var_20 = (unsigned char)203;
unsigned int var_21 = 2715988171U;
short var_22 = (short)11768;
unsigned long long int var_23 = 11960079511322181589ULL;
short arr_0 [19] ;
short arr_1 [19] [19] ;
unsigned int arr_2 [19] ;
unsigned short arr_5 [19] [19] ;
signed char arr_7 [19] [19] [19] ;
unsigned int arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)5908;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-24282;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 2441987033U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)29505;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-29 : (signed char)83;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 3215779704U : 3377804564U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
