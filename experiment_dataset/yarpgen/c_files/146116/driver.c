#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 640064677160843372ULL;
unsigned short var_2 = (unsigned short)1452;
unsigned char var_9 = (unsigned char)241;
int var_10 = -688604538;
unsigned int var_11 = 3685779305U;
signed char var_16 = (signed char)-7;
int zero = 0;
unsigned char var_17 = (unsigned char)219;
unsigned char var_18 = (unsigned char)26;
short var_19 = (short)-10326;
unsigned int var_20 = 2471042744U;
unsigned char var_21 = (unsigned char)198;
long long int arr_0 [10] ;
short arr_1 [10] ;
unsigned int arr_2 [10] ;
long long int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 5113083589314519071LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-17867;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 4286211899U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 2962403575104929536LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
