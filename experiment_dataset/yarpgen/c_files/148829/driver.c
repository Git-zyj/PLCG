#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)77;
short var_6 = (short)-15802;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 10586030351342396063ULL;
signed char var_9 = (signed char)-99;
unsigned char var_11 = (unsigned char)56;
unsigned short var_15 = (unsigned short)4474;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-97;
signed char var_18 = (signed char)-48;
int zero = 0;
unsigned short var_19 = (unsigned short)41746;
signed char var_20 = (signed char)75;
unsigned long long int var_21 = 13714042944192443945ULL;
signed char var_22 = (signed char)89;
unsigned int var_23 = 2231953323U;
unsigned short arr_7 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)20642 : (unsigned short)59363;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
