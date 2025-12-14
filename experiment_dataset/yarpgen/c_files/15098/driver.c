#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36765;
unsigned short var_4 = (unsigned short)3927;
short var_6 = (short)-21689;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)43917;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)58937;
int zero = 0;
signed char var_17 = (signed char)56;
unsigned long long int var_18 = 849133173838065622ULL;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-10449;
unsigned short var_21 = (unsigned short)62037;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-27309;
signed char var_24 = (signed char)-10;
unsigned long long int var_25 = 4555519970972346400ULL;
unsigned long long int arr_3 [18] [18] ;
unsigned int arr_5 [18] [18] [18] ;
long long int arr_7 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 7413511012460410541ULL : 4715231967389788003ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3999804964U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -4983128357445515255LL;
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
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
