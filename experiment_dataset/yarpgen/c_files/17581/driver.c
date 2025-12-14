#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9055158498264464035LL;
unsigned short var_3 = (unsigned short)9846;
short var_4 = (short)24841;
short var_5 = (short)-28484;
unsigned long long int var_6 = 3858108651525285147ULL;
long long int var_8 = 1762718173600220615LL;
unsigned char var_9 = (unsigned char)6;
int var_10 = 1438616631;
int var_11 = -1594767503;
unsigned long long int var_12 = 10924788166387422739ULL;
int zero = 0;
short var_13 = (short)-4997;
unsigned long long int var_14 = 18443543612702553318ULL;
signed char var_15 = (signed char)-41;
int var_16 = 591826336;
unsigned int arr_0 [15] [15] ;
short arr_2 [15] ;
unsigned short arr_4 [15] [15] ;
long long int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 2549797993U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)-20162;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)50465;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = -1599470153128074138LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
