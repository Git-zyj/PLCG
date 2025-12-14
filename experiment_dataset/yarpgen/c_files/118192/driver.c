#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1930090500182507121LL;
int var_5 = 1263840289;
int var_11 = 76627291;
unsigned long long int var_13 = 12887666955721032566ULL;
int zero = 0;
short var_20 = (short)-20555;
unsigned char var_21 = (unsigned char)14;
unsigned int var_22 = 155254251U;
unsigned char var_23 = (unsigned char)55;
unsigned long long int var_24 = 11760885036493551437ULL;
unsigned int var_25 = 3033215637U;
unsigned long long int var_26 = 4615865916193949518ULL;
unsigned int var_27 = 1267443518U;
unsigned char var_28 = (unsigned char)207;
int var_29 = 1056050218;
unsigned int arr_0 [18] ;
unsigned int arr_1 [18] ;
int arr_7 [14] ;
_Bool arr_2 [18] ;
int arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1307362238U : 1399993273U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 530246385U : 2893111071U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 1681400699;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 1615396936;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
