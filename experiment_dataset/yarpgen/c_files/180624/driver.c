#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)209;
int var_14 = -1039779307;
signed char var_17 = (signed char)-109;
unsigned short var_18 = (unsigned short)34820;
int zero = 0;
unsigned long long int var_19 = 11784611412488801145ULL;
unsigned int var_20 = 2236403853U;
signed char var_21 = (signed char)45;
unsigned short var_22 = (unsigned short)62624;
unsigned short arr_1 [24] ;
unsigned long long int arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)23286;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 2819157955794041401ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
