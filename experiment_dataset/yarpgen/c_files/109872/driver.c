#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
long long int var_7 = -8768097096768247624LL;
unsigned short var_12 = (unsigned short)29887;
int zero = 0;
unsigned char var_13 = (unsigned char)148;
unsigned int var_14 = 491596198U;
unsigned char var_15 = (unsigned char)248;
unsigned long long int var_16 = 4016120976342984515ULL;
unsigned short var_17 = (unsigned short)808;
unsigned short var_18 = (unsigned short)27546;
long long int var_19 = 155484455743793619LL;
unsigned int var_20 = 3262034764U;
unsigned int var_21 = 172079904U;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)126;
unsigned int arr_5 [11] [11] ;
unsigned char arr_16 [12] [12] ;
short arr_18 [12] [12] ;
int arr_20 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 694702607U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = (short)-21949;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = -647838058;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
