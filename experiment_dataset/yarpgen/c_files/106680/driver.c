#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7998;
signed char var_4 = (signed char)98;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)27774;
unsigned char var_7 = (unsigned char)176;
unsigned char var_8 = (unsigned char)27;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)241;
unsigned int var_13 = 1419858616U;
unsigned int var_14 = 2743281017U;
int var_15 = -87886926;
short var_16 = (short)-17311;
unsigned short arr_1 [13] ;
unsigned short arr_4 [13] ;
long long int arr_6 [13] ;
unsigned short arr_7 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)24234;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)26231;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 2649392208710685873LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)41685;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
