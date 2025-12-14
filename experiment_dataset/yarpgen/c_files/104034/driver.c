#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3180168845719749780LL;
signed char var_3 = (signed char)-125;
long long int var_5 = 6099506402983903628LL;
unsigned long long int var_6 = 16043155967747238118ULL;
short var_8 = (short)12132;
_Bool var_11 = (_Bool)0;
long long int var_12 = -2274579858141546281LL;
unsigned char var_16 = (unsigned char)189;
unsigned short var_17 = (unsigned short)65450;
signed char var_19 = (signed char)98;
int zero = 0;
unsigned long long int var_20 = 315918437899098828ULL;
long long int var_21 = 905951580296421175LL;
int var_22 = 1004505205;
unsigned int var_23 = 1062762775U;
unsigned char var_24 = (unsigned char)133;
short arr_2 [16] ;
unsigned int arr_4 [16] ;
long long int arr_5 [16] ;
short arr_7 [16] [16] [16] [16] ;
long long int arr_9 [16] [16] ;
unsigned short arr_10 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)16424;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 4077633079U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 716133034849434618LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)-5010;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = 1080500427803150556LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)28865 : (unsigned short)24342;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
