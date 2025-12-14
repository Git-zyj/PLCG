#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1591935957;
short var_3 = (short)30021;
unsigned long long int var_4 = 15588884254533790873ULL;
short var_5 = (short)24194;
int var_6 = 887559564;
signed char var_8 = (signed char)87;
unsigned long long int var_9 = 3275075076884604242ULL;
int zero = 0;
short var_12 = (short)20210;
short var_13 = (short)-2384;
unsigned long long int var_14 = 16050896497547892362ULL;
unsigned long long int var_15 = 10557867775377849450ULL;
short var_16 = (short)-8305;
unsigned long long int arr_10 [12] [12] [12] [12] ;
signed char arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 12300242537760101012ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (signed char)78;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
