#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)21278;
int zero = 0;
unsigned long long int var_14 = 8320294525579624848ULL;
unsigned long long int var_15 = 8055589818429104665ULL;
int var_16 = -2061038623;
unsigned long long int var_17 = 5329703742513606424ULL;
long long int var_18 = 6911378214448523293LL;
int var_19 = -1873565599;
unsigned char var_20 = (unsigned char)130;
short arr_0 [15] [15] ;
unsigned int arr_2 [15] ;
unsigned char arr_8 [15] [15] ;
unsigned long long int arr_9 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (short)3032;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 1459366983U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 16951000799807559667ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
