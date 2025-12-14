#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3392;
int var_2 = 1841572867;
long long int var_8 = 2916521858795523613LL;
unsigned short var_10 = (unsigned short)11619;
unsigned char var_13 = (unsigned char)116;
int zero = 0;
unsigned char var_17 = (unsigned char)135;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 63145373247236147ULL;
unsigned char var_20 = (unsigned char)64;
int arr_1 [21] ;
long long int arr_2 [21] ;
long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -2142489178;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -1341139052848425013LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 4830423303681171461LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
