#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2988124457614802514ULL;
signed char var_1 = (signed char)-45;
unsigned long long int var_2 = 3902913926329462898ULL;
unsigned int var_4 = 1048156010U;
long long int var_6 = 2343697692832039063LL;
int var_8 = -1371883245;
unsigned long long int var_10 = 10304231113973222095ULL;
unsigned short var_12 = (unsigned short)58972;
long long int var_13 = -454195135432798062LL;
int zero = 0;
unsigned int var_15 = 3672380533U;
unsigned long long int var_16 = 1874845378885487699ULL;
unsigned short var_17 = (unsigned short)10874;
unsigned int arr_3 [13] ;
unsigned short arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 2470364844U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)47654;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
