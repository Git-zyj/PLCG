#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)81;
signed char var_2 = (signed char)72;
unsigned char var_3 = (unsigned char)63;
unsigned short var_5 = (unsigned short)46490;
int var_6 = 402673612;
signed char var_9 = (signed char)-120;
int var_10 = -889806108;
int var_11 = 960840600;
int zero = 0;
unsigned char var_15 = (unsigned char)6;
int var_16 = 1662132195;
long long int var_17 = -5799562695375654772LL;
signed char var_18 = (signed char)-5;
int var_19 = 1379808385;
unsigned short arr_0 [16] ;
signed char arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)39219;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)-48;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
