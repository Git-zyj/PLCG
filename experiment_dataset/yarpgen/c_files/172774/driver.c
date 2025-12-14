#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 626352923484101405LL;
unsigned char var_3 = (unsigned char)106;
short var_9 = (short)30097;
unsigned short var_11 = (unsigned short)25881;
unsigned long long int var_12 = 2906018698587620624ULL;
long long int var_13 = -6425646005679964301LL;
short var_15 = (short)-16826;
int zero = 0;
signed char var_17 = (signed char)73;
unsigned short var_18 = (unsigned short)43304;
short var_19 = (short)-21636;
unsigned char var_20 = (unsigned char)134;
unsigned short var_21 = (unsigned short)41732;
unsigned short var_22 = (unsigned short)4051;
unsigned short var_23 = (unsigned short)45321;
short var_24 = (short)25928;
unsigned long long int arr_0 [10] ;
unsigned long long int arr_1 [10] ;
unsigned char arr_2 [10] [10] ;
long long int arr_5 [10] ;
int arr_8 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 10734529873935802856ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 4271782477186740868ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -2980879310925227673LL : -308242463452151224LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? -1852489308 : 989342511;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
