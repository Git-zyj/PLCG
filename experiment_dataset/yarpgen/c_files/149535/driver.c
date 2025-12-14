#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
int var_3 = 1071921584;
unsigned int var_9 = 998535077U;
unsigned char var_16 = (unsigned char)185;
unsigned short var_17 = (unsigned short)49951;
int zero = 0;
unsigned char var_20 = (unsigned char)16;
short var_21 = (short)-30222;
unsigned char var_22 = (unsigned char)6;
unsigned short var_23 = (unsigned short)55982;
unsigned int var_24 = 3654493131U;
unsigned long long int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 51025763952127263ULL : 939706679362501954ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
