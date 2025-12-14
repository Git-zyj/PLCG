#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1911223167U;
unsigned int var_1 = 3699280922U;
unsigned short var_3 = (unsigned short)51992;
unsigned short var_6 = (unsigned short)53900;
unsigned int var_7 = 1052040428U;
signed char var_8 = (signed char)-50;
unsigned int var_9 = 880517526U;
unsigned short var_10 = (unsigned short)12262;
unsigned int var_11 = 3257075659U;
signed char var_12 = (signed char)-9;
signed char var_13 = (signed char)-12;
unsigned int var_14 = 1180848287U;
unsigned int var_15 = 768736307U;
int zero = 0;
signed char var_16 = (signed char)-44;
unsigned int var_17 = 362167051U;
unsigned int var_18 = 3950726949U;
signed char var_19 = (signed char)98;
unsigned int var_20 = 2636093233U;
unsigned int var_21 = 293423327U;
unsigned int var_22 = 2010058036U;
unsigned short var_23 = (unsigned short)28442;
unsigned int var_24 = 4111435519U;
unsigned short var_25 = (unsigned short)15515;
signed char arr_0 [17] [17] ;
unsigned int arr_1 [17] ;
unsigned int arr_3 [13] ;
signed char arr_7 [13] [13] [13] ;
unsigned int arr_10 [13] [13] [13] [13] ;
unsigned int arr_14 [13] ;
unsigned int arr_19 [13] ;
unsigned short arr_4 [13] ;
signed char arr_5 [13] ;
unsigned short arr_17 [13] [13] ;
unsigned int arr_18 [13] [13] [13] [13] ;
unsigned int arr_22 [13] [13] [13] ;
signed char arr_23 [13] ;
signed char arr_24 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)83;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 2645901173U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 3750506139U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)37;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 1604821106U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = 403382733U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = 1228127977U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)47211;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (signed char)-56;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)25451;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 3497005058U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1477653751U : 3605700866U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (signed char)4 : (signed char)-54;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_24 [i_0] = (signed char)20;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
