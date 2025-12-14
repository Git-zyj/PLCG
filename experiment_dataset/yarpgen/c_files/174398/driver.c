#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)16;
int var_5 = 2032834553;
signed char var_11 = (signed char)30;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_18 = (short)12318;
_Bool var_19 = (_Bool)0;
int var_20 = -119495235;
unsigned long long int var_21 = 4457431807509051959ULL;
int var_22 = -682724556;
long long int arr_0 [19] ;
unsigned long long int arr_2 [19] ;
int arr_3 [19] ;
unsigned int arr_4 [19] ;
unsigned short arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 6566555820707633765LL : 7139302836952072720LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1009054232167812095ULL : 11672827580413571820ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -1156553296;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3603684836U : 122607299U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)48822 : (unsigned short)18760;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
