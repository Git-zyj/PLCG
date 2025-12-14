#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-109;
unsigned char var_1 = (unsigned char)168;
signed char var_2 = (signed char)39;
signed char var_4 = (signed char)-91;
unsigned char var_6 = (unsigned char)182;
unsigned char var_7 = (unsigned char)111;
signed char var_9 = (signed char)-88;
signed char var_10 = (signed char)-97;
signed char var_11 = (signed char)125;
unsigned char var_14 = (unsigned char)70;
unsigned char var_15 = (unsigned char)88;
unsigned char var_16 = (unsigned char)240;
int zero = 0;
unsigned char var_17 = (unsigned char)147;
unsigned char var_18 = (unsigned char)144;
unsigned char var_19 = (unsigned char)185;
signed char var_20 = (signed char)-127;
signed char var_21 = (signed char)-106;
signed char var_22 = (signed char)61;
unsigned char var_23 = (unsigned char)87;
unsigned char var_24 = (unsigned char)124;
signed char arr_0 [11] ;
unsigned char arr_3 [24] ;
unsigned char arr_4 [24] ;
short arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)30185;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
