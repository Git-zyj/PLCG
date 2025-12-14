#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2866244565943184636LL;
int var_1 = -2008089604;
int var_2 = -164451560;
short var_3 = (short)-5866;
int var_4 = -1126599850;
int var_5 = -953178508;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-14742;
unsigned int var_8 = 3442569776U;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 18196352446019096627ULL;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int var_13 = 1007489799;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 6900739022486801545ULL;
unsigned int var_16 = 2408818953U;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-16358;
int zero = 0;
signed char var_19 = (signed char)68;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-7151;
int var_22 = 1838546020;
_Bool arr_0 [14] ;
short arr_1 [14] ;
int arr_2 [14] [14] ;
signed char arr_3 [14] ;
short arr_4 [14] [14] [14] ;
signed char arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)21850;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 1252135074 : 1405115152;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-19897 : (short)13993;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-90;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
