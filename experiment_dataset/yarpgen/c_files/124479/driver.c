#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1283717910;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)40531;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)60333;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
long long int arr_0 [13] [13] ;
unsigned long long int arr_1 [13] ;
int arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 3879101618427099915LL : 4892085551963758600LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 7891885281629160622ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 463001604 : 1260980118;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
