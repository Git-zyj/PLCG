#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19020;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-21856;
unsigned char var_3 = (unsigned char)191;
unsigned long long int var_6 = 6449513079484378037ULL;
long long int var_7 = -349338244358680464LL;
unsigned char var_8 = (unsigned char)78;
int zero = 0;
unsigned int var_13 = 2252263816U;
signed char var_14 = (signed char)-125;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)253;
unsigned char var_17 = (unsigned char)118;
int arr_4 [11] [11] [11] ;
unsigned char arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 866589695;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned char)91;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
