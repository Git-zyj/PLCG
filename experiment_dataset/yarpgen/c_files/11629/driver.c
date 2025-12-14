#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5234169301128017060LL;
unsigned char var_1 = (unsigned char)34;
signed char var_2 = (signed char)52;
int var_3 = 2105837589;
long long int var_5 = -7101757518981041171LL;
unsigned short var_8 = (unsigned short)973;
long long int var_9 = -2990782560649811113LL;
unsigned char var_10 = (unsigned char)213;
int zero = 0;
unsigned char var_11 = (unsigned char)144;
long long int var_12 = 6076845865210302846LL;
unsigned short var_13 = (unsigned short)15529;
long long int var_14 = 7369316413295351313LL;
long long int var_15 = 3545814138605134907LL;
long long int arr_2 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 7645863292163815528LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
