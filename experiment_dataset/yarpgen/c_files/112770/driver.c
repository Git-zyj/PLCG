#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_12 = 1933074886U;
unsigned short var_14 = (unsigned short)57754;
signed char var_16 = (signed char)79;
unsigned short var_18 = (unsigned short)3900;
int zero = 0;
unsigned int var_19 = 3656165924U;
unsigned int var_20 = 3926360439U;
int var_21 = 402282429;
signed char var_22 = (signed char)61;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)1;
unsigned char arr_1 [22] ;
_Bool arr_2 [22] ;
unsigned short arr_3 [22] ;
unsigned short arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)39681 : (unsigned short)43060;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)64001;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
