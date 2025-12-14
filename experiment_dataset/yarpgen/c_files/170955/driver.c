#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)18;
int var_6 = -673424659;
signed char var_9 = (signed char)109;
unsigned char var_10 = (unsigned char)177;
unsigned long long int var_12 = 14097472100950438718ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_19 = -2435626785141359351LL;
signed char var_20 = (signed char)57;
unsigned int var_21 = 1302001121U;
unsigned char var_22 = (unsigned char)250;
int var_23 = 1443159344;
unsigned char var_24 = (unsigned char)34;
unsigned char var_25 = (unsigned char)226;
unsigned short var_26 = (unsigned short)1939;
long long int arr_0 [24] ;
unsigned int arr_1 [24] [24] ;
int arr_3 [24] [24] ;
int arr_5 [24] ;
short arr_10 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -2548875002868511801LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 3829990733U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 165524887;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 1778470595;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)-6195;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
