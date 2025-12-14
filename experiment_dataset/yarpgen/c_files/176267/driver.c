#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)65;
long long int var_3 = -4349935892840922840LL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)30264;
unsigned char var_8 = (unsigned char)55;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_13 = (short)-1447;
long long int var_14 = 7929941301206322338LL;
long long int var_15 = -2328474134426103116LL;
int var_16 = 288315663;
int var_17 = -1635498745;
short var_18 = (short)5250;
int arr_3 [21] [21] [21] ;
long long int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -2112104466;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3277719586385226590LL : 531904667290469584LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
