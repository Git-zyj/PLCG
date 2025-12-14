#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -741830819;
unsigned short var_1 = (unsigned short)11422;
long long int var_2 = -4005879617726568195LL;
int var_3 = -2112171298;
signed char var_4 = (signed char)49;
unsigned int var_5 = 1479822177U;
unsigned short var_6 = (unsigned short)27085;
signed char var_7 = (signed char)114;
unsigned long long int var_8 = 5928593801872221973ULL;
signed char var_9 = (signed char)56;
int zero = 0;
unsigned short var_10 = (unsigned short)11358;
signed char var_11 = (signed char)-111;
signed char var_12 = (signed char)-80;
unsigned long long int var_13 = 11207383313297274391ULL;
unsigned long long int var_14 = 10570550917184678388ULL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)109;
unsigned short var_17 = (unsigned short)64275;
unsigned short var_18 = (unsigned short)17998;
long long int var_19 = -4990130730525863275LL;
unsigned long long int var_20 = 17577128752033873009ULL;
unsigned short var_21 = (unsigned short)41200;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)21;
signed char var_24 = (signed char)28;
signed char arr_0 [11] [11] ;
_Bool arr_2 [11] [11] ;
signed char arr_5 [11] ;
signed char arr_6 [11] [11] [11] [11] ;
unsigned long long int arr_10 [11] [11] ;
signed char arr_11 [11] [11] ;
signed char arr_14 [11] ;
unsigned long long int arr_15 [11] ;
short arr_17 [11] [11] [11] [11] ;
unsigned short arr_18 [11] ;
signed char arr_8 [11] [11] ;
unsigned short arr_21 [11] ;
signed char arr_22 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = 1737656393465919166ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = 12689667654982799056ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (short)-20786;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = (unsigned short)21924;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = (unsigned short)59349;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)-79;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
