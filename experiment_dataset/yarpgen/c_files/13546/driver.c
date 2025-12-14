#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 3363038740303625180ULL;
long long int var_6 = 6003184473309119016LL;
int var_9 = 1858963716;
short var_10 = (short)-30866;
unsigned long long int var_11 = 5117346841463123675ULL;
_Bool var_12 = (_Bool)1;
int var_13 = -94948072;
signed char var_14 = (signed char)54;
unsigned int var_16 = 2636848388U;
unsigned long long int var_18 = 11304652962567153499ULL;
unsigned char var_19 = (unsigned char)161;
int zero = 0;
unsigned char var_20 = (unsigned char)27;
unsigned int var_21 = 2920476563U;
unsigned long long int var_22 = 11408928740928231667ULL;
unsigned int var_23 = 1202936251U;
int var_24 = 211418623;
signed char var_25 = (signed char)-77;
_Bool var_26 = (_Bool)0;
int arr_3 [13] ;
_Bool arr_4 [13] ;
unsigned int arr_5 [13] [13] [13] [13] ;
unsigned char arr_6 [13] [13] [13] [13] ;
unsigned char arr_9 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -938296273;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 2703385529U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)200;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
