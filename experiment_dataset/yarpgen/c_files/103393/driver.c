#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62507;
unsigned long long int var_5 = 7158133240964369920ULL;
unsigned long long int var_8 = 9080117851055210405ULL;
short var_10 = (short)7670;
short var_14 = (short)29295;
int var_16 = -107482295;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)31999;
unsigned long long int var_19 = 6570668977628851857ULL;
unsigned short var_20 = (unsigned short)46266;
unsigned long long int var_21 = 12064859885153433823ULL;
int arr_1 [15] ;
long long int arr_2 [15] [15] ;
long long int arr_3 [15] [15] ;
unsigned short arr_4 [15] ;
unsigned int arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -823028798;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = -2170287822975359700LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = -64644365167943557LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)1375;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 877829253U : 1439625236U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
