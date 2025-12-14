#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 404453686;
unsigned char var_3 = (unsigned char)151;
signed char var_5 = (signed char)29;
unsigned short var_11 = (unsigned short)12942;
unsigned char var_17 = (unsigned char)89;
int zero = 0;
long long int var_20 = -1627797901592837147LL;
unsigned int var_21 = 75550970U;
unsigned char var_22 = (unsigned char)109;
long long int var_23 = -7242102141605254912LL;
int arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 163335141;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
