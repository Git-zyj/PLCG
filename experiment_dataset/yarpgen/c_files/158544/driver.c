#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -715090737;
long long int var_1 = -6582355777026413335LL;
unsigned short var_3 = (unsigned short)27811;
long long int var_6 = -3443521793643726845LL;
unsigned int var_8 = 430544936U;
unsigned char var_9 = (unsigned char)6;
int zero = 0;
unsigned int var_14 = 310685467U;
signed char var_15 = (signed char)-95;
short var_16 = (short)17994;
unsigned short var_17 = (unsigned short)37680;
short var_18 = (short)25914;
short arr_0 [22] [22] ;
unsigned short arr_1 [22] ;
unsigned long long int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-3527;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)33706;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 17850368664736366408ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
