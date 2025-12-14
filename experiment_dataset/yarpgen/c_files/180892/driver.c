#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2355328220U;
signed char var_2 = (signed char)-103;
unsigned long long int var_3 = 13773687887958511517ULL;
unsigned long long int var_8 = 15025678098871302476ULL;
signed char var_10 = (signed char)-87;
signed char var_11 = (signed char)16;
int var_13 = -1476923311;
unsigned long long int var_14 = 14733913329871637518ULL;
unsigned char var_15 = (unsigned char)117;
int zero = 0;
unsigned short var_17 = (unsigned short)49695;
signed char var_18 = (signed char)-49;
unsigned long long int var_19 = 10809815017728555732ULL;
short var_20 = (short)-15001;
unsigned long long int var_21 = 8179015841051980587ULL;
unsigned long long int var_22 = 7759632453042448077ULL;
unsigned int var_23 = 1418331686U;
int var_24 = -641242214;
unsigned char arr_0 [14] ;
signed char arr_1 [14] [14] ;
unsigned short arr_4 [14] [14] ;
int arr_5 [14] ;
unsigned int arr_6 [14] [14] [14] ;
short arr_8 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)13302;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 1254036242;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2525372132U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)4379;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
