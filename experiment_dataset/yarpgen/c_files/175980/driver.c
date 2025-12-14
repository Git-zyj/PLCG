#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3861519272045925562LL;
unsigned int var_3 = 845569378U;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2806439772U;
unsigned short var_8 = (unsigned short)11280;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-51;
unsigned char var_14 = (unsigned char)97;
unsigned char var_16 = (unsigned char)14;
unsigned short var_17 = (unsigned short)47321;
unsigned long long int var_18 = 15662840638554850249ULL;
unsigned long long int var_19 = 6892638602703018247ULL;
int zero = 0;
unsigned long long int var_20 = 11688571161567275275ULL;
unsigned int var_21 = 3326876379U;
unsigned int var_22 = 2245769248U;
unsigned char var_23 = (unsigned char)82;
long long int var_24 = -8397799429524304749LL;
unsigned long long int var_25 = 18311595816985559196ULL;
int var_26 = -1077646546;
int var_27 = 1630963170;
unsigned char var_28 = (unsigned char)237;
unsigned char var_29 = (unsigned char)42;
int var_30 = -58976803;
unsigned char var_31 = (unsigned char)78;
long long int var_32 = -2667755190205141408LL;
unsigned char arr_0 [24] [24] ;
int arr_1 [24] ;
long long int arr_2 [24] ;
int arr_5 [25] ;
unsigned long long int arr_6 [25] [25] ;
signed char arr_7 [25] [25] ;
long long int arr_11 [25] ;
long long int arr_4 [24] ;
int arr_12 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)1 : (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 515281397;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -5038569649292858048LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = -62621779;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 14401191963798306927ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 4055492402313923937LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1286910998852203392LL : 2230187327460749385LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = -497174766;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
