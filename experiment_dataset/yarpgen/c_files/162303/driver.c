#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20903;
unsigned char var_2 = (unsigned char)202;
unsigned short var_4 = (unsigned short)61910;
unsigned char var_5 = (unsigned char)32;
signed char var_6 = (signed char)52;
signed char var_7 = (signed char)-75;
unsigned short var_9 = (unsigned short)42558;
int zero = 0;
signed char var_10 = (signed char)29;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-58;
unsigned short arr_0 [12] [12] ;
unsigned int arr_1 [12] [12] ;
unsigned long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)57530;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 906321991U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 14825093466518405799ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
