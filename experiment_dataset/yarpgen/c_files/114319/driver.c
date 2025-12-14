#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -797917216;
long long int var_2 = 4091375102932844339LL;
long long int var_4 = 6930768885948135373LL;
int var_5 = -886815438;
signed char var_7 = (signed char)126;
int var_8 = -1501350244;
signed char var_11 = (signed char)17;
signed char var_12 = (signed char)-11;
signed char var_13 = (signed char)-83;
int zero = 0;
short var_14 = (short)1600;
unsigned long long int var_15 = 9705019786464976578ULL;
short var_16 = (short)-8066;
signed char var_17 = (signed char)115;
unsigned char var_18 = (unsigned char)187;
int var_19 = -649119867;
short var_20 = (short)2001;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)21;
signed char var_23 = (signed char)-69;
unsigned short arr_0 [10] [10] ;
_Bool arr_1 [10] ;
unsigned char arr_2 [10] ;
unsigned short arr_3 [10] ;
int arr_4 [10] [10] ;
unsigned char arr_5 [10] ;
unsigned long long int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)7644;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)11400;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 551270936;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 2474745221063870823ULL : 15351108939792710759ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
