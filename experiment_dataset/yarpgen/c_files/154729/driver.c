#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1872679712;
signed char var_1 = (signed char)39;
long long int var_2 = 5211869886180807880LL;
long long int var_3 = 1833370399934243576LL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-14;
signed char var_6 = (signed char)-81;
unsigned int var_7 = 3959068830U;
short var_8 = (short)-24008;
long long int var_9 = -6697315996810427760LL;
int zero = 0;
long long int var_10 = -3783302294636983162LL;
int var_11 = 390069722;
unsigned short var_12 = (unsigned short)16329;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 5835531440328543387ULL;
signed char var_15 = (signed char)83;
int var_16 = 1476836357;
unsigned int var_17 = 1074240114U;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 12554371118698732787ULL;
unsigned int var_20 = 986257715U;
unsigned short var_21 = (unsigned short)45434;
long long int var_22 = 7240954702176334902LL;
signed char arr_0 [21] ;
unsigned short arr_1 [21] ;
unsigned short arr_2 [21] [21] [21] ;
int arr_3 [21] ;
int arr_7 [21] ;
unsigned char arr_8 [21] ;
unsigned char arr_12 [16] [16] ;
unsigned long long int arr_16 [16] ;
unsigned short arr_11 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)24465;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)47044;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 342325351;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = -1901898298;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)114 : (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = 2579234090340168200ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (unsigned short)56720;
}

void checksum() {
    hash(&seed, var_10);
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
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
