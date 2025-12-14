#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9613419611237451632ULL;
unsigned short var_3 = (unsigned short)41312;
unsigned int var_17 = 1603908855U;
signed char var_18 = (signed char)39;
int zero = 0;
unsigned char var_19 = (unsigned char)110;
unsigned short var_20 = (unsigned short)45559;
unsigned long long int var_21 = 14582702377175331466ULL;
long long int var_22 = 8663742934628857194LL;
_Bool var_23 = (_Bool)0;
int var_24 = -1961255581;
short arr_8 [10] [10] [10] [10] [10] ;
unsigned short arr_11 [10] ;
unsigned int arr_14 [22] [22] ;
unsigned short arr_12 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-10230;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (unsigned short)15253;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = 1966988471U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)7669 : (unsigned short)38435;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
