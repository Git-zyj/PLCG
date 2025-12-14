#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2451334249630523152ULL;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)225;
signed char var_6 = (signed char)33;
unsigned long long int var_9 = 2512494266873498668ULL;
int zero = 0;
signed char var_10 = (signed char)-109;
unsigned short var_11 = (unsigned short)2626;
unsigned int var_12 = 1857264373U;
signed char var_13 = (signed char)50;
unsigned short var_14 = (unsigned short)24821;
unsigned int arr_0 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 1951066017U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
