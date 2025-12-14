#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-198;
unsigned long long int var_7 = 9576687737685187672ULL;
int zero = 0;
int var_12 = 1713904766;
unsigned int var_13 = 2974485278U;
short var_14 = (short)15619;
unsigned short var_15 = (unsigned short)24415;
_Bool var_16 = (_Bool)0;
unsigned long long int arr_0 [21] ;
unsigned char arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 10699271844737001428ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)152;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
