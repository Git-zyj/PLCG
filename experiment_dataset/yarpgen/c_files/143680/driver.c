#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5866446318652792ULL;
unsigned short var_7 = (unsigned short)45167;
unsigned long long int var_8 = 9716058417648852991ULL;
_Bool var_10 = (_Bool)0;
unsigned char var_15 = (unsigned char)104;
unsigned char var_18 = (unsigned char)251;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 4110950318U;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)118;
int var_24 = 559102584;
unsigned char arr_0 [16] ;
_Bool arr_1 [16] [16] ;
unsigned int arr_2 [16] ;
long long int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 1287253098U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -5974113903000020465LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
