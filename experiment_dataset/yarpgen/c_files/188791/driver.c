#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7800445961186292287ULL;
signed char var_3 = (signed char)-70;
int var_5 = -1545116164;
short var_6 = (short)-24044;
long long int var_7 = -374977531785091479LL;
unsigned short var_8 = (unsigned short)18920;
signed char var_9 = (signed char)-3;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 865337991U;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)52;
unsigned long long int var_15 = 7180785236515790957ULL;
long long int var_16 = 3352260319820132170LL;
unsigned long long int var_17 = 10309292433807784240ULL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)47694;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 14286964449099958152ULL;
unsigned short arr_0 [25] ;
unsigned int arr_1 [25] [25] ;
int arr_5 [25] [25] ;
unsigned int arr_7 [25] [25] [25] [25] ;
int arr_9 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)14842;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 3722145307U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -658854628 : 930150708;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 2926824090U : 4191987855U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 619354374 : 243940713;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
