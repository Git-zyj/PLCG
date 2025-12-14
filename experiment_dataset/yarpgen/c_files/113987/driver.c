#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21696;
short var_1 = (short)28114;
short var_2 = (short)-8994;
int var_4 = 1758964292;
long long int var_5 = -6546031332449811803LL;
unsigned short var_6 = (unsigned short)59784;
unsigned int var_7 = 1663414721U;
unsigned char var_8 = (unsigned char)50;
int zero = 0;
unsigned int var_12 = 782334675U;
int var_13 = 1974905211;
long long int var_14 = -7134602669215262994LL;
unsigned long long int var_15 = 6494006556460872142ULL;
short var_16 = (short)-19168;
unsigned int arr_2 [14] [14] [14] ;
long long int arr_3 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 3636772890U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -171325945666709769LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
