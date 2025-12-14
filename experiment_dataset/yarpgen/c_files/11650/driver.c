#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22918;
long long int var_1 = -3901047707236137356LL;
int var_2 = -221835563;
unsigned char var_3 = (unsigned char)198;
unsigned short var_9 = (unsigned short)21062;
int zero = 0;
unsigned char var_11 = (unsigned char)63;
int var_12 = -1130083844;
short var_13 = (short)-12548;
long long int arr_1 [23] ;
unsigned long long int arr_3 [23] ;
short arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -2657240542408111863LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 6177936370245684398ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)8460;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
