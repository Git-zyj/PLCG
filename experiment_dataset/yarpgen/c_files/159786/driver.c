#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 643252965;
long long int var_2 = 5037255866207713693LL;
int var_3 = 273104035;
long long int var_4 = 7877022911939316939LL;
signed char var_5 = (signed char)-69;
unsigned long long int var_6 = 15214970352735504260ULL;
unsigned long long int var_7 = 16997904123409743670ULL;
unsigned long long int var_8 = 8127244537244956552ULL;
unsigned int var_9 = 2843105171U;
unsigned int var_10 = 2336620251U;
long long int var_12 = 2518203514989881868LL;
long long int var_14 = 5703621479906804698LL;
int zero = 0;
signed char var_15 = (signed char)59;
unsigned long long int var_16 = 13403743039274697742ULL;
unsigned int var_17 = 4271639442U;
unsigned int var_18 = 2889724100U;
signed char arr_4 [11] [11] [11] ;
long long int arr_10 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -6321685032302309617LL : 867799975057138485LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
