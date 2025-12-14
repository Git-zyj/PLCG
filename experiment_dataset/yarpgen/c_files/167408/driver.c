#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)88;
unsigned char var_3 = (unsigned char)193;
unsigned short var_8 = (unsigned short)16351;
unsigned int var_9 = 2279392512U;
unsigned short var_14 = (unsigned short)46336;
int var_15 = 2013895907;
unsigned char var_18 = (unsigned char)242;
int zero = 0;
unsigned short var_19 = (unsigned short)47906;
unsigned int var_20 = 1377077725U;
unsigned char var_21 = (unsigned char)111;
unsigned long long int var_22 = 15421168571493825520ULL;
unsigned short var_23 = (unsigned short)43910;
unsigned char var_24 = (unsigned char)73;
unsigned char arr_5 [25] ;
unsigned char arr_7 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)117;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
