#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5194;
unsigned long long int var_4 = 14083849204512447088ULL;
short var_9 = (short)17549;
int zero = 0;
unsigned long long int var_13 = 3361629423578015993ULL;
long long int var_14 = 2543084868077862784LL;
long long int var_15 = 5983462603201095412LL;
short var_16 = (short)22703;
unsigned int var_17 = 2030598361U;
unsigned int var_18 = 1559121390U;
unsigned int arr_0 [24] ;
unsigned short arr_1 [24] [24] ;
int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 2063270439U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)46013;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -1150411377;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
