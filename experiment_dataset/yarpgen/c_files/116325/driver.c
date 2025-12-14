#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)349;
unsigned short var_6 = (unsigned short)63151;
unsigned int var_7 = 241266976U;
unsigned short var_9 = (unsigned short)11824;
signed char var_10 = (signed char)-62;
int zero = 0;
unsigned long long int var_11 = 11131443768694879164ULL;
unsigned long long int var_12 = 803673221470088368ULL;
unsigned long long int var_13 = 17128212364262974061ULL;
signed char var_14 = (signed char)-67;
short var_15 = (short)29169;
unsigned int var_16 = 1550305981U;
short var_17 = (short)-20931;
unsigned int var_18 = 1390981203U;
short var_19 = (short)-9465;
short var_20 = (short)-18496;
long long int var_21 = 3759569575987591510LL;
unsigned long long int arr_0 [18] [18] ;
short arr_1 [18] ;
signed char arr_2 [18] ;
unsigned int arr_3 [18] [18] ;
_Bool arr_8 [12] ;
unsigned long long int arr_11 [12] [12] [12] [12] [12] [12] ;
signed char arr_12 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 16321890418488882027ULL : 14142769451376864356ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)18183 : (short)-7593;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 934711341U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 829390505841236517ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (signed char)-2;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
