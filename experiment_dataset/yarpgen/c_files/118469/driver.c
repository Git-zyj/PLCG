#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4671087675538785962LL;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)248;
unsigned int var_10 = 3484112283U;
unsigned long long int var_12 = 14742224532030243225ULL;
int zero = 0;
unsigned int var_18 = 1869824810U;
short var_19 = (short)27403;
unsigned short var_20 = (unsigned short)37121;
unsigned int var_21 = 1958500097U;
unsigned int var_22 = 2760664060U;
_Bool var_23 = (_Bool)0;
long long int arr_0 [22] ;
unsigned int arr_3 [22] ;
unsigned int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 8103243842806863750LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 1037113618U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 660467797U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
