#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -215232695;
unsigned int var_4 = 3240329036U;
long long int var_5 = -8009176462715677794LL;
unsigned long long int var_8 = 6617213643426294753ULL;
unsigned long long int var_9 = 17935868788150306766ULL;
int zero = 0;
int var_14 = 1040040565;
_Bool var_15 = (_Bool)0;
int var_16 = 1935087921;
unsigned long long int arr_2 [19] [19] ;
unsigned int arr_4 [19] [19] ;
int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 3191069728218904388ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 2786484476U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -884056952;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
