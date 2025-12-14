#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 594286633U;
unsigned int var_3 = 3324283816U;
long long int var_6 = 5299247483618596195LL;
long long int var_13 = 5801269264315843750LL;
long long int var_14 = -3222143399675654026LL;
unsigned int var_16 = 1800227634U;
long long int var_19 = -5398659472727650453LL;
int zero = 0;
unsigned int var_20 = 2145563140U;
unsigned char var_21 = (unsigned char)70;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 1817225078U;
_Bool arr_0 [16] ;
signed char arr_2 [16] ;
signed char arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)-127;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
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
