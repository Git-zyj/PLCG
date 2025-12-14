#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1144061711345811024LL;
unsigned long long int var_6 = 11717142692097404488ULL;
unsigned long long int var_7 = 3294815565123397842ULL;
short var_10 = (short)-21815;
int zero = 0;
unsigned char var_13 = (unsigned char)243;
short var_14 = (short)-10164;
unsigned int var_15 = 1353564309U;
int var_16 = 276376899;
int var_17 = -575588569;
short var_18 = (short)-25526;
long long int arr_8 [18] ;
int arr_4 [22] ;
int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = -4248510065061986158LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -1727906185;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -122469399;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
