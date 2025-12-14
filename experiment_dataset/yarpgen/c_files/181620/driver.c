#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 112981695U;
signed char var_3 = (signed char)-3;
int var_5 = 376894559;
signed char var_6 = (signed char)82;
unsigned int var_8 = 214002173U;
signed char var_12 = (signed char)-82;
int var_14 = 2143134396;
_Bool var_15 = (_Bool)1;
unsigned int var_17 = 3941026031U;
int zero = 0;
unsigned char var_19 = (unsigned char)97;
unsigned short var_20 = (unsigned short)13207;
unsigned char var_21 = (unsigned char)131;
short var_22 = (short)22922;
int var_23 = -713744834;
short arr_1 [22] [22] ;
signed char arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-28404;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)106;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
