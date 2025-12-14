#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53216;
unsigned long long int var_1 = 531946000028636450ULL;
int var_2 = -1626430430;
short var_3 = (short)3169;
unsigned int var_4 = 863743919U;
long long int var_5 = 5284802104752277205LL;
unsigned short var_6 = (unsigned short)10244;
signed char var_8 = (signed char)2;
int zero = 0;
long long int var_10 = -1332770787891339787LL;
long long int var_11 = -3221941952273263878LL;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3092911034U;
short var_14 = (short)-32434;
unsigned short arr_2 [24] ;
unsigned int arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)42109;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 867936415U : 1689525972U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
