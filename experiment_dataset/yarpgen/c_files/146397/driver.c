#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17932972409983652542ULL;
unsigned long long int var_1 = 16937852386668926371ULL;
unsigned long long int var_2 = 12342916198686867602ULL;
unsigned char var_4 = (unsigned char)38;
long long int var_5 = 1092316526333051684LL;
_Bool var_7 = (_Bool)1;
int var_8 = -1727079167;
unsigned long long int var_10 = 10193253051322192637ULL;
unsigned long long int var_11 = 6788820023801259474ULL;
int zero = 0;
unsigned long long int var_15 = 14754545079074386677ULL;
short var_16 = (short)-24637;
unsigned long long int var_17 = 14495070171879172106ULL;
long long int var_18 = -7092641517899859212LL;
unsigned int arr_0 [19] ;
signed char arr_2 [19] ;
unsigned short arr_3 [19] [19] ;
unsigned long long int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3795538598U : 1332836192U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-15 : (signed char)-99;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)20580 : (unsigned short)60808;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 8092292475704959691ULL : 1718715035299119640ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
