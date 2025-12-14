#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7930751140224196245LL;
unsigned int var_1 = 3410712709U;
unsigned int var_3 = 3667089011U;
signed char var_5 = (signed char)120;
unsigned short var_10 = (unsigned short)57839;
unsigned short var_11 = (unsigned short)64133;
int var_12 = 482236707;
int zero = 0;
long long int var_13 = -7633290277027037813LL;
unsigned short var_14 = (unsigned short)34857;
signed char var_15 = (signed char)-65;
int var_16 = -577173543;
unsigned short var_17 = (unsigned short)965;
short var_18 = (short)-672;
short var_19 = (short)20700;
short var_20 = (short)-15395;
unsigned int var_21 = 2418466109U;
short var_22 = (short)3490;
int var_23 = -1998076426;
unsigned short var_24 = (unsigned short)44748;
int var_25 = -729906786;
unsigned int var_26 = 4274844020U;
unsigned int arr_1 [13] [13] ;
unsigned int arr_5 [13] [13] [13] ;
unsigned short arr_6 [13] [13] ;
signed char arr_7 [13] ;
int arr_8 [13] [13] [13] [13] ;
signed char arr_12 [13] [13] [13] [13] ;
int arr_14 [16] ;
signed char arr_20 [16] ;
unsigned int arr_23 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 1376652801U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 404121877U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)31045;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -371568959;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-7 : (signed char)-14;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = -35083169;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = 3305871493U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
