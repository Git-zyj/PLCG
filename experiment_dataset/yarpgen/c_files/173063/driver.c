#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26863;
unsigned long long int var_10 = 10839737964951110139ULL;
unsigned int var_11 = 877968321U;
unsigned short var_14 = (unsigned short)35887;
unsigned long long int var_15 = 16353334134985974889ULL;
unsigned int var_18 = 2991216309U;
unsigned int var_19 = 4032409577U;
int zero = 0;
long long int var_20 = -7659790493277791883LL;
short var_21 = (short)16197;
short var_22 = (short)6357;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-27623;
short var_25 = (short)-26726;
long long int var_26 = 1901430363232014608LL;
unsigned int arr_1 [11] ;
_Bool arr_6 [11] [11] [11] ;
long long int arr_21 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 491193747U : 1222312295U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 1375471295590389978LL : -8226020920612187985LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
