#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 650903534U;
int zero = 0;
unsigned int var_20 = 4236894689U;
unsigned int var_21 = 2308373048U;
int var_22 = 421393355;
unsigned int var_23 = 1883716462U;
unsigned int var_24 = 3165585406U;
short var_25 = (short)3041;
int var_26 = 154440748;
int var_27 = 254936241;
unsigned int arr_3 [18] ;
unsigned int arr_7 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 898855U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = 388471662U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
