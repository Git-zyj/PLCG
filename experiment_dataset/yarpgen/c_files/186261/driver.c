#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44675;
unsigned int var_1 = 2219932617U;
unsigned char var_2 = (unsigned char)46;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)15906;
unsigned int var_7 = 2816749745U;
short var_8 = (short)-8976;
short var_9 = (short)-10417;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2379659424U;
short var_12 = (short)9468;
signed char var_13 = (signed char)42;
long long int var_14 = -6409827315816540496LL;
int zero = 0;
signed char var_15 = (signed char)-86;
int var_16 = 1499087601;
short var_17 = (short)-6236;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)57743;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-77;
int var_24 = 1285329431;
unsigned int arr_0 [13] ;
_Bool arr_1 [13] ;
unsigned short arr_5 [19] ;
signed char arr_6 [19] ;
_Bool arr_10 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1341974835U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned short)37516;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
