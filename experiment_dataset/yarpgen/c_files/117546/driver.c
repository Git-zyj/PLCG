#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)22157;
short var_4 = (short)26788;
unsigned long long int var_5 = 9057572310471249111ULL;
short var_6 = (short)-3551;
short var_8 = (short)834;
unsigned short var_10 = (unsigned short)11851;
unsigned char var_11 = (unsigned char)50;
unsigned int var_12 = 3328184341U;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_20 = -575401930015599136LL;
signed char var_21 = (signed char)-83;
unsigned int var_22 = 2374041654U;
unsigned char var_23 = (unsigned char)158;
_Bool var_24 = (_Bool)0;
unsigned int var_25 = 504876685U;
unsigned int var_26 = 1111572912U;
signed char var_27 = (signed char)-58;
unsigned short var_28 = (unsigned short)49660;
unsigned short arr_0 [12] [12] ;
_Bool arr_5 [12] ;
int arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)1197;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = -1789273691;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
