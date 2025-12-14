#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9352;
unsigned int var_4 = 3472087128U;
int var_6 = 1158146330;
signed char var_7 = (signed char)-51;
int var_8 = 8405712;
short var_9 = (short)4109;
unsigned long long int var_10 = 5369426952696523708ULL;
unsigned int var_11 = 2265257593U;
int zero = 0;
unsigned char var_13 = (unsigned char)136;
signed char var_14 = (signed char)-119;
short var_15 = (short)-26154;
int var_16 = -480229608;
int var_17 = 966068941;
signed char var_18 = (signed char)2;
unsigned long long int var_19 = 12740209373983062055ULL;
long long int var_20 = -1060254549819962071LL;
unsigned int var_21 = 1882730724U;
_Bool var_22 = (_Bool)1;
short arr_4 [17] [17] [17] ;
short arr_16 [19] [19] ;
short arr_11 [17] [17] ;
unsigned long long int arr_20 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)21792;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = (short)30475;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)28916 : (short)-2042;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 5799323958673388973ULL : 14322302389423450306ULL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
