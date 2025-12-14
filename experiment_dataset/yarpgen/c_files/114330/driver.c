#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2619532287822084133LL;
unsigned int var_2 = 2446063836U;
unsigned char var_3 = (unsigned char)150;
signed char var_4 = (signed char)-121;
unsigned char var_5 = (unsigned char)205;
int var_6 = 793953837;
unsigned short var_7 = (unsigned short)4196;
unsigned int var_9 = 2739108402U;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 2097320905;
unsigned short var_12 = (unsigned short)54219;
unsigned int var_13 = 3399436413U;
int arr_3 [19] ;
unsigned int arr_5 [19] ;
short arr_2 [12] ;
unsigned short arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -697995062;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 2095058814U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)13493;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned short)16147;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
