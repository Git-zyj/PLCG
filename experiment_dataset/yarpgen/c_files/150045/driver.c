#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-127;
signed char var_2 = (signed char)-76;
unsigned char var_3 = (unsigned char)55;
signed char var_4 = (signed char)-78;
signed char var_5 = (signed char)15;
unsigned char var_6 = (unsigned char)242;
signed char var_7 = (signed char)-70;
int var_8 = 57244025;
signed char var_9 = (signed char)-110;
unsigned long long int var_10 = 8950526728773455983ULL;
unsigned char var_11 = (unsigned char)124;
signed char var_12 = (signed char)77;
int var_13 = 1845630117;
long long int var_14 = 9185646869786630793LL;
unsigned char var_15 = (unsigned char)208;
unsigned int var_17 = 3015767028U;
signed char var_18 = (signed char)-88;
unsigned short var_19 = (unsigned short)34353;
int zero = 0;
unsigned int var_20 = 2989581338U;
signed char var_21 = (signed char)108;
signed char var_22 = (signed char)-87;
unsigned int var_23 = 1908813705U;
signed char var_24 = (signed char)120;
int var_25 = 1810157584;
unsigned long long int arr_3 [18] ;
int arr_4 [18] [18] ;
int arr_5 [18] [18] ;
int arr_10 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 8143429568261982269ULL : 15505543671337206410ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 1574010265 : -174338538;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 1163920101 : 1674424602;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 457725836 : 2036184624;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
