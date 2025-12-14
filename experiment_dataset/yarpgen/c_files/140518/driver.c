#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23543;
unsigned short var_2 = (unsigned short)61466;
unsigned short var_6 = (unsigned short)42683;
unsigned int var_7 = 3576236429U;
long long int var_12 = 5367653461340879354LL;
unsigned int var_15 = 3017034311U;
int zero = 0;
unsigned long long int var_18 = 18221100309555991366ULL;
unsigned int var_19 = 24136304U;
unsigned char var_20 = (unsigned char)126;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 4009104205U;
_Bool arr_0 [22] ;
unsigned char arr_1 [22] ;
unsigned long long int arr_2 [22] [22] ;
short arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 14255663181976964995ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)29108;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
