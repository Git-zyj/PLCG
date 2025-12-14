#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1027659181901737445LL;
signed char var_3 = (signed char)92;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-13984;
unsigned long long int var_6 = 615361866009302659ULL;
unsigned long long int var_8 = 2439695913030441678ULL;
unsigned long long int var_9 = 6901495280204575544ULL;
long long int var_10 = 2777541404650574025LL;
long long int var_11 = -1418766360240432255LL;
unsigned char var_13 = (unsigned char)136;
int zero = 0;
unsigned short var_14 = (unsigned short)21852;
unsigned int var_15 = 1038200855U;
unsigned short var_16 = (unsigned short)32474;
unsigned short var_17 = (unsigned short)27279;
signed char arr_2 [18] ;
long long int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -8652134089243381354LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
