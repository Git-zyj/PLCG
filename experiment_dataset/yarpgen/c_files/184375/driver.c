#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8044762579660013738ULL;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)48;
unsigned short var_4 = (unsigned short)55389;
unsigned short var_5 = (unsigned short)38793;
signed char var_6 = (signed char)21;
unsigned long long int var_7 = 10741764651689906383ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 5940756148395292306ULL;
int var_10 = 1457656009;
unsigned int var_11 = 685563776U;
signed char var_13 = (signed char)124;
int zero = 0;
short var_14 = (short)-22532;
int var_15 = -1851325731;
unsigned int var_16 = 587379946U;
unsigned int var_17 = 2029023234U;
unsigned char var_18 = (unsigned char)148;
_Bool var_19 = (_Bool)1;
long long int var_20 = -8770753374667748217LL;
short var_21 = (short)-14458;
short var_22 = (short)-14750;
int arr_5 [12] [12] ;
signed char arr_10 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -1030728155 : -125477472;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)-107 : (signed char)-87;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
