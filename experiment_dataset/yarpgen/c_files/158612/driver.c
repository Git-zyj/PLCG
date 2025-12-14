#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18683;
signed char var_2 = (signed char)65;
short var_5 = (short)781;
signed char var_9 = (signed char)23;
int var_10 = -1279327145;
int var_11 = 57895986;
int zero = 0;
unsigned short var_12 = (unsigned short)53455;
long long int var_13 = -1310982547028645658LL;
unsigned long long int var_14 = 386110246625278609ULL;
long long int var_15 = 8359893228762651390LL;
long long int arr_0 [16] ;
long long int arr_1 [16] ;
signed char arr_4 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -7833125818478101986LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 6278394077195888833LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-39;
}

void checksum() {
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
