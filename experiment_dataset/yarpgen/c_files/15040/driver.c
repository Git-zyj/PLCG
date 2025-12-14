#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 427727686;
int var_4 = 543513348;
int var_8 = -862122099;
int var_10 = 1046670286;
signed char var_11 = (signed char)59;
int var_12 = 1479736409;
int zero = 0;
int var_16 = 1457402995;
short var_17 = (short)-18994;
int var_18 = -1589396224;
int var_19 = -2013369001;
int var_20 = -1601083492;
int arr_0 [16] [16] ;
int arr_3 [16] ;
int arr_7 [16] [16] ;
signed char arr_4 [16] ;
int arr_9 [16] ;
signed char arr_12 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -1105063393;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1631280477 : -2041863552;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 864710837 : 1910817717;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-122 : (signed char)63;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 490138738 : -1825951106;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (signed char)17;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
