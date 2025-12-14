#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)28;
long long int var_9 = 1556939204431531422LL;
int zero = 0;
short var_14 = (short)-27458;
short var_15 = (short)-32231;
int var_16 = 1280509133;
short var_17 = (short)-18428;
long long int var_18 = -268664693575328621LL;
signed char arr_1 [14] ;
int arr_2 [14] ;
long long int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -1614122460;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 6196345611741487380LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
