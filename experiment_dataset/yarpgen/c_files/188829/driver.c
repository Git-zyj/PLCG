#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3313967530643312260LL;
unsigned int var_1 = 2120375962U;
unsigned char var_2 = (unsigned char)167;
unsigned long long int var_4 = 16148859174036339044ULL;
short var_5 = (short)12057;
unsigned char var_6 = (unsigned char)171;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 779862741U;
int zero = 0;
int var_10 = 142577443;
unsigned short var_11 = (unsigned short)39054;
unsigned long long int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 6264854758679752899ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
