#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)79;
unsigned char var_2 = (unsigned char)170;
short var_4 = (short)-13491;
_Bool var_5 = (_Bool)0;
short var_6 = (short)17621;
int var_7 = -671879884;
unsigned int var_10 = 3440032878U;
long long int var_11 = -8341828374667132502LL;
int zero = 0;
long long int var_12 = 5995854715854506084LL;
long long int var_13 = -8417569883786932438LL;
long long int var_14 = 5009190985916405068LL;
unsigned char var_15 = (unsigned char)97;
long long int var_16 = 2418111637793906928LL;
int var_17 = -213890846;
long long int var_18 = -1699370723443465576LL;
unsigned short var_19 = (unsigned short)4500;
long long int arr_0 [15] ;
signed char arr_1 [15] [15] ;
signed char arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 3172218599519369268LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (signed char)41;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
