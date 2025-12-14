#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1830257837773511069LL;
unsigned long long int var_3 = 530935145842076602ULL;
_Bool var_6 = (_Bool)0;
_Bool var_12 = (_Bool)1;
long long int var_16 = 6101862837154950611LL;
int zero = 0;
unsigned short var_19 = (unsigned short)59985;
unsigned short var_20 = (unsigned short)57222;
signed char var_21 = (signed char)63;
long long int var_22 = 646158382865045326LL;
long long int var_23 = 7700517961427952642LL;
unsigned short var_24 = (unsigned short)10874;
unsigned long long int arr_0 [12] ;
short arr_1 [12] ;
long long int arr_3 [12] ;
short arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 6693830014470280081ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)-29722;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 1910425212841773059LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (short)28054;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
