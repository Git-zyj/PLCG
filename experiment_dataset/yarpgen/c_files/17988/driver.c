#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7757522804610345818ULL;
unsigned short var_2 = (unsigned short)31574;
unsigned char var_4 = (unsigned char)11;
unsigned int var_10 = 4146098175U;
signed char var_14 = (signed char)-13;
long long int var_16 = -5183116745975990784LL;
unsigned long long int var_19 = 2071946482715499508ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 9185139592776743988LL;
unsigned long long int var_22 = 2061209553245662745ULL;
unsigned char var_23 = (unsigned char)177;
unsigned short var_24 = (unsigned short)4020;
unsigned long long int arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 9551629503612155226ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
