#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)65;
int var_1 = -2089448759;
long long int var_2 = 9129728917093434553LL;
unsigned int var_3 = 271625831U;
short var_4 = (short)-1412;
unsigned long long int var_5 = 345222819871772641ULL;
unsigned short var_7 = (unsigned short)22584;
int var_8 = -1176123665;
int zero = 0;
short var_10 = (short)-30974;
long long int var_11 = 169936508218905402LL;
long long int var_12 = 2797120861274424890LL;
unsigned long long int arr_2 [16] ;
unsigned long long int arr_3 [16] [16] ;
unsigned int arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 6161777261177295462ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 1517942492877316552ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 2683183352U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
