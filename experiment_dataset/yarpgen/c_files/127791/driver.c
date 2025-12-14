#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8862;
unsigned char var_2 = (unsigned char)174;
signed char var_3 = (signed char)58;
unsigned long long int var_10 = 4448767211769160653ULL;
unsigned short var_11 = (unsigned short)18365;
signed char var_12 = (signed char)-98;
unsigned char var_13 = (unsigned char)21;
int var_15 = 873024713;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 2234143059U;
_Bool var_21 = (_Bool)0;
int var_22 = 148863287;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)169;
_Bool arr_0 [20] ;
_Bool arr_2 [20] [20] ;
unsigned char arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)33;
}

void checksum() {
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
