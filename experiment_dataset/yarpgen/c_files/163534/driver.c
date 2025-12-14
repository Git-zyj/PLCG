#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)11163;
unsigned int var_6 = 3716525058U;
long long int var_7 = 1428580861575268118LL;
unsigned char var_9 = (unsigned char)107;
unsigned long long int var_10 = 17488552564364198264ULL;
int var_15 = 174044632;
int zero = 0;
long long int var_19 = -7730018749535537313LL;
signed char var_20 = (signed char)-65;
unsigned short var_21 = (unsigned short)30286;
long long int arr_0 [24] [24] ;
short arr_1 [24] [24] ;
unsigned short arr_3 [24] ;
long long int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -3692711977452065676LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)3666;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)39229;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -6637135874817407801LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
