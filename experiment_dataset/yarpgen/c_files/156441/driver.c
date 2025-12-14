#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -729323255;
unsigned long long int var_1 = 2583130787953843944ULL;
unsigned int var_2 = 1216423674U;
short var_3 = (short)12288;
unsigned long long int var_5 = 15480616693575044756ULL;
long long int var_6 = 2270680443478877379LL;
unsigned int var_7 = 792207271U;
unsigned char var_9 = (unsigned char)70;
short var_10 = (short)26804;
int zero = 0;
long long int var_11 = 4024323881425055633LL;
unsigned short var_12 = (unsigned short)38505;
unsigned long long int var_13 = 12340321089614498959ULL;
unsigned int var_14 = 4073598973U;
unsigned int var_15 = 3928675955U;
unsigned char arr_3 [22] ;
unsigned long long int arr_5 [22] ;
int arr_6 [22] ;
signed char arr_7 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 16166524362346646624ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = -932459085;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)22;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
