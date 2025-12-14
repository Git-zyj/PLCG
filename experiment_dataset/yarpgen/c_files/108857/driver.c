#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 143961980;
unsigned int var_5 = 3228543439U;
int var_14 = 1835743461;
unsigned short var_17 = (unsigned short)18957;
short var_19 = (short)-5556;
int zero = 0;
unsigned char var_20 = (unsigned char)22;
unsigned char var_21 = (unsigned char)75;
unsigned int var_22 = 1876419486U;
unsigned int arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 356792764U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
