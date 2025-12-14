#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1639438551;
short var_2 = (short)-17289;
unsigned int var_3 = 2601426451U;
int var_7 = -1238407461;
unsigned int var_13 = 419884136U;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)2805;
long long int var_18 = 5076660001630574844LL;
int zero = 0;
short var_20 = (short)5081;
unsigned short var_21 = (unsigned short)60611;
int var_22 = 204965590;
unsigned int var_23 = 3987288779U;
int var_24 = 347675591;
long long int var_25 = 2663638123216037606LL;
int arr_0 [14] [14] ;
_Bool arr_1 [14] ;
long long int arr_6 [14] [14] ;
long long int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = -1806853999;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = -4056595961332508265LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 6432590527068716110LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
