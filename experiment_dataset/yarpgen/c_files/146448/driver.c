#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)42699;
signed char var_5 = (signed char)-65;
unsigned int var_6 = 3705818799U;
unsigned char var_7 = (unsigned char)206;
signed char var_9 = (signed char)-111;
int zero = 0;
long long int var_10 = 1807206844506635637LL;
unsigned short var_11 = (unsigned short)19031;
unsigned short var_12 = (unsigned short)2105;
unsigned int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 2972516717U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
