#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5412135395282218503ULL;
unsigned long long int var_4 = 3694175454424321855ULL;
unsigned long long int var_8 = 3777671813142076310ULL;
signed char var_10 = (signed char)45;
signed char var_12 = (signed char)-115;
int zero = 0;
unsigned int var_14 = 4280360908U;
unsigned long long int var_15 = 2567663454962365212ULL;
long long int var_16 = -7342652746920278202LL;
long long int var_17 = -8523891793004141298LL;
long long int var_18 = -6830033366653433079LL;
unsigned int arr_1 [22] [22] ;
signed char arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 4132585105U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)75;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
