#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
_Bool var_3 = (_Bool)0;
int var_5 = -146920385;
unsigned short var_6 = (unsigned short)15250;
unsigned int var_7 = 1572453149U;
signed char var_8 = (signed char)-26;
unsigned short var_10 = (unsigned short)54345;
int zero = 0;
short var_11 = (short)-14823;
unsigned short var_12 = (unsigned short)11223;
unsigned short var_13 = (unsigned short)40466;
short var_14 = (short)25391;
signed char var_15 = (signed char)73;
_Bool arr_2 [20] ;
long long int arr_3 [20] [20] ;
unsigned char arr_5 [20] ;
int arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 2371195511094212243LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 921569464;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
