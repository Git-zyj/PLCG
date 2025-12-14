#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16137;
signed char var_1 = (signed char)-116;
signed char var_4 = (signed char)-67;
short var_5 = (short)16882;
unsigned int var_7 = 278814627U;
signed char var_8 = (signed char)-117;
signed char var_10 = (signed char)-35;
int zero = 0;
unsigned short var_11 = (unsigned short)21974;
int var_12 = -647112496;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)125;
long long int var_15 = 6517437440453786323LL;
long long int arr_2 [24] [24] ;
signed char arr_3 [24] [24] ;
long long int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 2621706148485827367LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 2387036208407145743LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
