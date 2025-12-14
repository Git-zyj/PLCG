#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)38;
int var_9 = 2098477797;
unsigned char var_11 = (unsigned char)69;
int var_12 = -610238207;
int var_13 = -547818062;
int var_14 = -1792447732;
unsigned char var_15 = (unsigned char)71;
unsigned short var_16 = (unsigned short)52292;
int zero = 0;
unsigned char var_19 = (unsigned char)204;
int var_20 = -105909839;
unsigned long long int var_21 = 11413191714094228300ULL;
signed char var_22 = (signed char)118;
unsigned long long int var_23 = 9697560961161423189ULL;
unsigned char arr_0 [11] ;
int arr_3 [11] ;
int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 2018105642;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 1586832883;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
