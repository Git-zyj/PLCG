#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-41;
signed char var_1 = (signed char)77;
unsigned short var_5 = (unsigned short)16428;
short var_6 = (short)-19142;
unsigned char var_7 = (unsigned char)227;
_Bool var_12 = (_Bool)0;
signed char var_18 = (signed char)-56;
int zero = 0;
long long int var_19 = 1314565882881745199LL;
signed char var_20 = (signed char)-86;
unsigned long long int var_21 = 10305345626823454174ULL;
unsigned long long int arr_0 [23] [23] ;
int arr_1 [23] ;
_Bool arr_4 [23] ;
long long int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 6702423557032689510ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -1967941541;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 938473088276150547LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
