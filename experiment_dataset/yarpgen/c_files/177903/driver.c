#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5442;
unsigned char var_2 = (unsigned char)142;
signed char var_4 = (signed char)-111;
unsigned char var_5 = (unsigned char)254;
long long int var_7 = -3682986665737029462LL;
unsigned short var_8 = (unsigned short)6373;
int zero = 0;
unsigned int var_11 = 3489485701U;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)61004;
unsigned short var_14 = (unsigned short)40354;
int var_15 = -2040385236;
unsigned int var_16 = 130043777U;
int var_17 = -393853923;
signed char arr_0 [18] [18] ;
signed char arr_1 [18] [18] ;
unsigned char arr_2 [18] ;
short arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (short)-29335;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
