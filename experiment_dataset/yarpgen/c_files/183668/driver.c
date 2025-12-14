#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)28010;
long long int var_3 = 727802132983530324LL;
unsigned long long int var_4 = 7133435374246706489ULL;
signed char var_7 = (signed char)-55;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 1157907402U;
unsigned long long int var_11 = 6824068084863060355ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)64588;
unsigned short var_14 = (unsigned short)14373;
unsigned long long int var_15 = 8200055567534127665ULL;
int zero = 0;
unsigned long long int var_17 = 7882214958521030277ULL;
unsigned int var_18 = 2916768273U;
unsigned long long int var_19 = 10704669480779031037ULL;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)19074;
unsigned char var_22 = (unsigned char)136;
_Bool var_23 = (_Bool)0;
unsigned short arr_0 [19] ;
short arr_1 [19] [19] ;
unsigned int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)61226;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)17207;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 2781838333U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
