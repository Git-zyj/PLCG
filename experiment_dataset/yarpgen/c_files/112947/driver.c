#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-107;
int var_3 = -2039008519;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)52794;
int var_14 = 1857988302;
int zero = 0;
unsigned char var_16 = (unsigned char)149;
signed char var_17 = (signed char)20;
unsigned short var_18 = (unsigned short)54183;
signed char var_19 = (signed char)79;
unsigned char var_20 = (unsigned char)13;
long long int var_21 = -2316149917271652664LL;
unsigned int var_22 = 2316690338U;
signed char var_23 = (signed char)-59;
unsigned int arr_0 [10] ;
unsigned short arr_1 [10] ;
unsigned int arr_2 [10] ;
_Bool arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 2528854206U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)49375;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 334754452U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
