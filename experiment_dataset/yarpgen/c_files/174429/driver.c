#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)38;
long long int var_1 = 2391959738708525955LL;
unsigned char var_3 = (unsigned char)59;
signed char var_4 = (signed char)24;
unsigned int var_5 = 3453351850U;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-117;
int var_10 = 1373873695;
int zero = 0;
long long int var_11 = 8507332703919214962LL;
unsigned long long int var_12 = 3222844472205318972ULL;
int var_13 = 999525724;
short var_14 = (short)-11940;
unsigned long long int arr_0 [15] ;
_Bool arr_3 [15] ;
signed char arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 4992405702441605140ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (signed char)-98;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
