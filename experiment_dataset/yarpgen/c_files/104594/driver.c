#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15657;
long long int var_1 = -7975943866915796688LL;
signed char var_2 = (signed char)115;
unsigned int var_3 = 3151866426U;
_Bool var_4 = (_Bool)0;
long long int var_7 = -2290879452952288196LL;
long long int var_8 = -7471605636833936743LL;
unsigned char var_9 = (unsigned char)79;
signed char var_10 = (signed char)-124;
int var_11 = 147757288;
signed char var_13 = (signed char)-67;
signed char var_15 = (signed char)-51;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)122;
int zero = 0;
signed char var_19 = (signed char)33;
unsigned long long int var_20 = 18014275595757660871ULL;
short var_21 = (short)-4089;
short var_22 = (short)-9322;
long long int var_23 = 2990124370761252992LL;
unsigned long long int var_24 = 2309659584810596587ULL;
unsigned short var_25 = (unsigned short)57099;
long long int arr_2 [19] ;
unsigned short arr_3 [19] [19] ;
signed char arr_6 [19] [19] [19] ;
unsigned int arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 5941893461374438012LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)46232;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-89 : (signed char)109;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2664421348U : 3476197911U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
