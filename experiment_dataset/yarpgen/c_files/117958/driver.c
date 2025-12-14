#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1836936848U;
unsigned long long int var_2 = 17586385076292361678ULL;
signed char var_3 = (signed char)90;
signed char var_4 = (signed char)-12;
int var_5 = -535777015;
signed char var_7 = (signed char)78;
unsigned int var_9 = 3087795267U;
int zero = 0;
signed char var_11 = (signed char)-32;
short var_12 = (short)3489;
long long int var_13 = -206491521281188020LL;
signed char var_14 = (signed char)-24;
short var_15 = (short)28451;
_Bool arr_0 [18] ;
unsigned char arr_1 [18] [18] ;
short arr_2 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-10298;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
