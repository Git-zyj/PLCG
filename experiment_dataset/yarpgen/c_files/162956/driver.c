#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50846;
unsigned long long int var_2 = 9771407884513293571ULL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)2644;
signed char var_10 = (signed char)72;
long long int var_12 = -4624329471803875354LL;
long long int var_14 = 8313441295276447951LL;
unsigned long long int var_15 = 8710232029456321580ULL;
long long int var_16 = -6748010804985111179LL;
int zero = 0;
long long int var_18 = 205027226383844237LL;
long long int var_19 = 8673838990971758127LL;
unsigned long long int var_20 = 3499551350505101791ULL;
unsigned int var_21 = 2767996768U;
int var_22 = 145966203;
signed char arr_0 [11] [11] ;
short arr_1 [11] ;
unsigned short arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)-8959;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)21192 : (unsigned short)1292;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
