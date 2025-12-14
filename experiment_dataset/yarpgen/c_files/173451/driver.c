#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12356;
signed char var_8 = (signed char)48;
unsigned char var_10 = (unsigned char)59;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -3491107349078949986LL;
unsigned int var_20 = 2046273815U;
unsigned char var_21 = (unsigned char)68;
_Bool var_22 = (_Bool)0;
long long int var_23 = -2716789850480868278LL;
signed char arr_0 [10] ;
unsigned short arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)17398 : (unsigned short)43081;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
