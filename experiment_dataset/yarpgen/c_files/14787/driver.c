#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6886276591226111322ULL;
unsigned int var_6 = 3158441845U;
long long int var_7 = 3090190025753898352LL;
long long int var_10 = 7588139860909100704LL;
int zero = 0;
unsigned char var_11 = (unsigned char)193;
long long int var_12 = 4468420174718110914LL;
unsigned char var_13 = (unsigned char)243;
long long int var_14 = 8920110858443458312LL;
unsigned char arr_0 [12] [12] ;
unsigned long long int arr_1 [12] [12] ;
unsigned int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 5151319572346508959ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 2566818692U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
