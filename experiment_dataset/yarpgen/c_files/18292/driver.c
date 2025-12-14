#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1744117838U;
signed char var_12 = (signed char)120;
unsigned char var_15 = (unsigned char)112;
signed char var_17 = (signed char)-81;
int var_18 = 780851613;
long long int var_19 = -7887470697481984893LL;
int zero = 0;
signed char var_20 = (signed char)-14;
long long int var_21 = 6401523857827538721LL;
signed char var_22 = (signed char)17;
unsigned int var_23 = 3391483520U;
unsigned int var_24 = 1267524210U;
unsigned short var_25 = (unsigned short)50748;
signed char var_26 = (signed char)124;
int arr_1 [11] ;
unsigned int arr_2 [11] [11] ;
signed char arr_6 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -407664982;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 651285681U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)122;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
