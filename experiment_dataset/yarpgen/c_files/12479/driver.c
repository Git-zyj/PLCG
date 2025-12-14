#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3273877778U;
int var_5 = 1406604816;
unsigned int var_6 = 2359664214U;
unsigned long long int var_7 = 13318165752686165257ULL;
unsigned int var_8 = 3006573498U;
unsigned char var_9 = (unsigned char)209;
long long int var_10 = 1491524403110398768LL;
long long int var_11 = -6191437674182514884LL;
unsigned char var_12 = (unsigned char)15;
unsigned long long int var_13 = 15205966737662842168ULL;
unsigned char var_15 = (unsigned char)88;
unsigned char var_16 = (unsigned char)219;
int zero = 0;
unsigned int var_18 = 1550881350U;
signed char var_19 = (signed char)90;
long long int var_20 = -7879692181526148166LL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2220610756U;
long long int var_23 = 1684893833575372281LL;
unsigned int var_24 = 177223237U;
unsigned int arr_0 [20] [20] ;
unsigned int arr_1 [20] [20] ;
unsigned short arr_8 [20] [20] ;
long long int arr_2 [20] ;
unsigned short arr_17 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 587802965U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 4039899597U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)9570;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 2903868566338562507LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)57600;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
