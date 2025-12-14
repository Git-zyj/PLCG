#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23264;
unsigned int var_1 = 3691801219U;
unsigned char var_2 = (unsigned char)42;
short var_6 = (short)3817;
signed char var_8 = (signed char)78;
unsigned short var_11 = (unsigned short)21632;
int zero = 0;
long long int var_12 = 1322385800007139716LL;
int var_13 = -1090769342;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-16618;
signed char var_16 = (signed char)0;
unsigned char var_17 = (unsigned char)194;
_Bool arr_1 [16] [16] ;
signed char arr_2 [16] ;
signed char arr_3 [16] ;
long long int arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = -7592195352881185373LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
