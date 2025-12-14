#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)42080;
unsigned int var_3 = 1656351468U;
unsigned long long int var_5 = 829170127745171749ULL;
_Bool var_10 = (_Bool)1;
int var_11 = -419337230;
int var_12 = 6858962;
long long int var_14 = 1828666571911226744LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)112;
unsigned int var_18 = 2466860212U;
unsigned long long int var_19 = 15043932005173397745ULL;
_Bool var_20 = (_Bool)1;
unsigned long long int arr_6 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3125248316164544486ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
