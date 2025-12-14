#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1950627157;
unsigned long long int var_1 = 3400956535810303393ULL;
long long int var_2 = -1051239422435803055LL;
signed char var_4 = (signed char)107;
unsigned int var_7 = 4002674761U;
unsigned long long int var_8 = 14661551586977502547ULL;
unsigned long long int var_9 = 15778032412319110120ULL;
int zero = 0;
long long int var_10 = 6144800200125693182LL;
unsigned long long int var_11 = 14498803505631288613ULL;
long long int var_12 = -1625662579491064688LL;
short var_13 = (short)-5543;
unsigned int var_14 = 642060192U;
unsigned long long int var_15 = 1124628326142376997ULL;
unsigned short var_16 = (unsigned short)8888;
unsigned long long int arr_0 [11] [11] ;
long long int arr_2 [11] [11] ;
signed char arr_4 [11] [11] [11] ;
long long int arr_9 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 5175667781330133533ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 6589650128242377024LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = 2938200457155060544LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
