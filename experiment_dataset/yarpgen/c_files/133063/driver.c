#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-72;
int var_6 = -2083282126;
int var_11 = 1384816972;
unsigned char var_12 = (unsigned char)57;
int var_18 = -1658979218;
int zero = 0;
long long int var_19 = -4422662683222709922LL;
int var_20 = 691426755;
long long int var_21 = -7108794515166829265LL;
unsigned char var_22 = (unsigned char)191;
long long int var_23 = 7970357597841169523LL;
short var_24 = (short)13079;
long long int var_25 = -8032161524243451897LL;
unsigned long long int var_26 = 1890826027102638601ULL;
signed char var_27 = (signed char)-122;
unsigned int var_28 = 2423050676U;
short var_29 = (short)15002;
long long int var_30 = 617844205139967033LL;
_Bool var_31 = (_Bool)0;
int var_32 = -523385393;
int var_33 = -1485487949;
signed char var_34 = (signed char)-45;
short arr_0 [19] ;
unsigned char arr_1 [19] ;
_Bool arr_2 [19] [19] ;
int arr_3 [19] ;
unsigned long long int arr_4 [19] [19] ;
signed char arr_6 [19] [19] [19] ;
unsigned short arr_7 [19] [19] [19] [19] ;
unsigned int arr_8 [19] ;
long long int arr_16 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)-16487;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -1979515659;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 4330879854343928821ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-79;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)9643;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 2771520058U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = -4042929111233510523LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
