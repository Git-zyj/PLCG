#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)193;
unsigned long long int var_2 = 11159530927326421698ULL;
signed char var_3 = (signed char)-81;
short var_4 = (short)28448;
unsigned long long int var_7 = 14651698490513033791ULL;
unsigned int var_10 = 1564393811U;
unsigned int var_11 = 165968227U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 11300409999335999285ULL;
unsigned int var_14 = 3487003607U;
int zero = 0;
unsigned long long int var_15 = 16748299190559167080ULL;
short var_16 = (short)-16804;
short var_17 = (short)4755;
int arr_0 [10] [10] ;
short arr_1 [10] ;
unsigned int arr_2 [10] ;
long long int arr_3 [10] ;
unsigned char arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 205324216;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)17082;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 2278954337U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 6845549172483899367LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)154;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
