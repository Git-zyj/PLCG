#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1923192085U;
long long int var_1 = 1456743972999060131LL;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 5132487389604342751ULL;
unsigned short var_6 = (unsigned short)17022;
unsigned long long int var_8 = 293969497383266853ULL;
long long int var_9 = 6402429600231574643LL;
unsigned long long int var_10 = 2723679893874349064ULL;
int var_13 = 452013829;
unsigned long long int var_14 = 17003412285851817187ULL;
unsigned char var_16 = (unsigned char)41;
int zero = 0;
long long int var_19 = 5775303085988605564LL;
unsigned char var_20 = (unsigned char)95;
int var_21 = -339020914;
unsigned char var_22 = (unsigned char)31;
unsigned int var_23 = 1164516320U;
long long int var_24 = -5113492533679945304LL;
unsigned int arr_1 [18] ;
_Bool arr_2 [18] [18] ;
int arr_3 [18] ;
unsigned long long int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3953286543U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -1332027498;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 10330764313703256887ULL;
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
