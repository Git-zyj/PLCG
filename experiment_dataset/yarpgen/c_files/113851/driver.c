#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53923;
unsigned char var_2 = (unsigned char)150;
unsigned long long int var_3 = 11171750850994195931ULL;
int var_4 = 164556849;
unsigned short var_5 = (unsigned short)52939;
unsigned int var_6 = 2413970609U;
long long int var_7 = -2435498059838994190LL;
short var_8 = (short)-23051;
unsigned int var_9 = 3525603849U;
int zero = 0;
short var_10 = (short)9239;
signed char var_11 = (signed char)25;
unsigned int var_12 = 139792426U;
signed char var_13 = (signed char)-15;
signed char var_14 = (signed char)87;
unsigned int var_15 = 3162745723U;
long long int arr_0 [14] ;
int arr_2 [14] [14] ;
unsigned short arr_3 [14] [14] ;
_Bool arr_10 [14] ;
unsigned short arr_11 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2119697981104836131LL : -2948194260158826228LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 343920868 : 219403328;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)62222 : (unsigned short)7673;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (unsigned short)10968;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
