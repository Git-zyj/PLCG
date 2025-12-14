#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26671;
unsigned short var_1 = (unsigned short)27066;
unsigned short var_2 = (unsigned short)20576;
unsigned long long int var_5 = 14145541753560749021ULL;
unsigned short var_6 = (unsigned short)1981;
unsigned long long int var_8 = 4841291898495416906ULL;
long long int var_9 = -8649677842702830289LL;
unsigned short var_10 = (unsigned short)58144;
unsigned short var_11 = (unsigned short)22037;
unsigned short var_12 = (unsigned short)24844;
unsigned long long int var_13 = 18398496960542630862ULL;
unsigned short var_14 = (unsigned short)59398;
unsigned short var_16 = (unsigned short)3291;
int zero = 0;
unsigned short var_17 = (unsigned short)15154;
signed char var_18 = (signed char)80;
unsigned long long int arr_3 [10] ;
unsigned short arr_4 [10] ;
long long int arr_5 [10] [10] ;
int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 808442964593347317ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned short)3534;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = -9219998171718841456LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = -510001913;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
