#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)100;
signed char var_4 = (signed char)-100;
signed char var_6 = (signed char)51;
signed char var_7 = (signed char)58;
signed char var_9 = (signed char)-108;
_Bool var_11 = (_Bool)1;
long long int var_13 = -4272665294400134747LL;
unsigned char var_15 = (unsigned char)175;
int zero = 0;
signed char var_16 = (signed char)21;
unsigned char var_17 = (unsigned char)227;
unsigned int var_18 = 2940636469U;
long long int var_19 = -5933250193008891932LL;
signed char var_20 = (signed char)-24;
signed char var_21 = (signed char)-31;
short var_22 = (short)-8045;
signed char var_23 = (signed char)-73;
unsigned short arr_0 [12] [12] ;
unsigned int arr_2 [12] ;
short arr_4 [12] [12] [12] ;
signed char arr_11 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)59497;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 966003963U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)21860;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-46;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
