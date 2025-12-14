#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28188;
unsigned int var_2 = 22478545U;
unsigned long long int var_4 = 16583659336550164981ULL;
unsigned char var_5 = (unsigned char)74;
unsigned long long int var_6 = 10003920762259037894ULL;
long long int var_7 = -1654602459340068836LL;
short var_8 = (short)-21578;
unsigned long long int var_17 = 4027204966004064375ULL;
int zero = 0;
unsigned int var_20 = 3733667569U;
unsigned int var_21 = 4155665043U;
unsigned long long int arr_4 [23] [23] [23] ;
unsigned short arr_6 [23] [23] ;
unsigned long long int arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2160260406545823011ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)27200;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 12956649722481954259ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
