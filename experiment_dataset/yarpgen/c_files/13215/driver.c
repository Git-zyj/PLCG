#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3329270622936232573ULL;
unsigned char var_1 = (unsigned char)103;
unsigned long long int var_3 = 18384847493656547651ULL;
int var_7 = -1722041770;
unsigned int var_8 = 1628773124U;
unsigned char var_10 = (unsigned char)45;
int var_12 = 2014332303;
int zero = 0;
unsigned long long int var_14 = 6299984791083087725ULL;
int var_15 = 597313096;
long long int var_16 = 2095834222119163681LL;
unsigned short var_17 = (unsigned short)17382;
unsigned long long int arr_0 [15] ;
unsigned long long int arr_4 [15] [15] ;
unsigned int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 10842320235609138921ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 16864117904633254411ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 2981046717U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
