#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)3;
int var_4 = -386214465;
unsigned long long int var_5 = 17457540539502604555ULL;
unsigned short var_6 = (unsigned short)5395;
unsigned short var_7 = (unsigned short)7586;
unsigned int var_9 = 3453236743U;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)225;
unsigned char var_17 = (unsigned char)42;
int zero = 0;
int var_20 = -535234241;
unsigned int var_21 = 435406548U;
unsigned int var_22 = 397947337U;
unsigned short arr_2 [15] [15] ;
unsigned long long int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)43799;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 4968166255219462982ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
