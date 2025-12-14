#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)65;
_Bool var_9 = (_Bool)1;
long long int var_12 = 3908371999739160006LL;
int zero = 0;
unsigned char var_14 = (unsigned char)188;
unsigned long long int var_15 = 759295741638711753ULL;
unsigned int var_16 = 564442078U;
long long int var_17 = 2492728275652198135LL;
_Bool var_18 = (_Bool)1;
long long int var_19 = 4843918149467986369LL;
int var_20 = 1549191957;
unsigned long long int var_21 = 794281834972787678ULL;
unsigned long long int arr_0 [20] [20] ;
unsigned long long int arr_1 [20] ;
unsigned long long int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 4667870463838005473ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 9192405182131008637ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 5163033903365294201ULL : 13189844121139315308ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
