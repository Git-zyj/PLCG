#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1588277382U;
unsigned int var_4 = 1095378230U;
int var_6 = 1538947652;
unsigned long long int var_9 = 10128723588383869743ULL;
short var_10 = (short)-17847;
signed char var_12 = (signed char)-44;
unsigned long long int var_13 = 10343082394772172321ULL;
short var_14 = (short)20057;
unsigned int var_16 = 3360404379U;
int zero = 0;
unsigned char var_17 = (unsigned char)245;
unsigned char var_18 = (unsigned char)250;
unsigned long long int var_19 = 14059264378476970184ULL;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 4725478735183097217ULL;
_Bool arr_2 [12] ;
unsigned char arr_9 [12] [12] [12] [12] [12] [12] ;
unsigned long long int arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 7728639152654794855ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
