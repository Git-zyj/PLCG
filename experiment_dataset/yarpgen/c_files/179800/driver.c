#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_9 = 5504967831928509052ULL;
unsigned char var_13 = (unsigned char)244;
int var_15 = 2066921677;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-26097;
short arr_0 [20] ;
int arr_1 [20] ;
unsigned long long int arr_2 [20] [20] ;
long long int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)31084;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -196044366;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 1279731667468143356ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = -759497987237507621LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
