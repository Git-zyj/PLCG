#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4123770150U;
short var_1 = (short)5884;
unsigned char var_7 = (unsigned char)235;
unsigned char var_9 = (unsigned char)75;
unsigned char var_12 = (unsigned char)221;
unsigned char var_13 = (unsigned char)4;
short var_14 = (short)31298;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_16 = (short)1317;
unsigned int var_17 = 927856006U;
unsigned long long int var_18 = 9778629547142773573ULL;
short var_19 = (short)-27926;
short var_20 = (short)28194;
unsigned long long int var_21 = 4855003770942017679ULL;
short arr_0 [19] ;
signed char arr_1 [19] ;
unsigned char arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)21520;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)23 : (unsigned char)12;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
