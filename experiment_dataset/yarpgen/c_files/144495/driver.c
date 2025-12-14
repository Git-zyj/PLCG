#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1825952351312482670LL;
short var_5 = (short)23524;
short var_6 = (short)30638;
unsigned short var_8 = (unsigned short)22364;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)56079;
unsigned long long int var_16 = 7591520780139177645ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)55679;
short var_18 = (short)-19249;
unsigned int var_19 = 1287645974U;
unsigned int var_20 = 3010104174U;
unsigned int var_21 = 2300765637U;
unsigned int arr_0 [11] [11] ;
unsigned short arr_1 [11] ;
_Bool arr_2 [11] ;
unsigned short arr_4 [13] ;
unsigned short arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 386148563U : 1923676709U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)16863;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)52854;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)41017 : (unsigned short)65147;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
