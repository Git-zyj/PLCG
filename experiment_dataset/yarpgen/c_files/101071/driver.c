#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)147;
unsigned short var_8 = (unsigned short)34405;
unsigned long long int var_9 = 13787580175177669832ULL;
int zero = 0;
unsigned long long int var_12 = 6154982458876013862ULL;
_Bool var_13 = (_Bool)1;
int var_14 = -1522870053;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)238;
long long int var_17 = 1763492629968411356LL;
unsigned long long int var_18 = 3657736160010554282ULL;
unsigned char arr_1 [10] [10] ;
_Bool arr_6 [12] ;
short arr_2 [10] ;
unsigned long long int arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)-6038;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 4055772097948168456ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
