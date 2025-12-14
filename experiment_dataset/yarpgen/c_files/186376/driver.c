#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3310060690U;
unsigned char var_6 = (unsigned char)79;
int var_8 = 1409031102;
int zero = 0;
unsigned int var_12 = 2022254439U;
unsigned int var_13 = 3780554674U;
unsigned char var_14 = (unsigned char)186;
int var_15 = 1922755171;
unsigned int var_16 = 3496034708U;
unsigned int var_17 = 4143656736U;
unsigned int var_18 = 920937424U;
int var_19 = -1351285086;
unsigned int arr_3 [18] [18] ;
int arr_9 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 3228181216U : 531311579U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = 1947399163;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
