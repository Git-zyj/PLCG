#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 919110081107438152LL;
unsigned long long int var_3 = 12209878561650772631ULL;
unsigned char var_4 = (unsigned char)103;
signed char var_6 = (signed char)-116;
unsigned short var_7 = (unsigned short)36614;
unsigned short var_8 = (unsigned short)63802;
int zero = 0;
long long int var_10 = 3341144995142837930LL;
unsigned int var_11 = 159551411U;
unsigned long long int var_12 = 17835327357866935458ULL;
unsigned char var_13 = (unsigned char)33;
unsigned short var_14 = (unsigned short)33992;
unsigned short var_15 = (unsigned short)41206;
int arr_0 [13] [13] ;
unsigned short arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -1038932014;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)35300;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
