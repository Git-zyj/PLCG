#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-47;
int var_3 = 1879375528;
unsigned char var_4 = (unsigned char)199;
unsigned char var_6 = (unsigned char)94;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)29904;
unsigned char var_9 = (unsigned char)104;
int zero = 0;
unsigned long long int var_10 = 7940819417147286229ULL;
unsigned long long int var_11 = 5553680279225826141ULL;
signed char var_12 = (signed char)32;
unsigned int var_13 = 2163233468U;
unsigned char var_14 = (unsigned char)104;
long long int var_15 = -7794650677412790806LL;
unsigned long long int arr_2 [15] ;
int arr_4 [15] ;
unsigned char arr_5 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 1484407544229844635ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -874383981;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)237;
}

void checksum() {
    hash(&seed, var_10);
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
