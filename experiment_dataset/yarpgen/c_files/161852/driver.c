#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1503318702;
unsigned char var_8 = (unsigned char)18;
signed char var_9 = (signed char)-21;
unsigned long long int var_10 = 1088367190057576726ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)19440;
unsigned long long int var_12 = 6467223322589660659ULL;
signed char var_13 = (signed char)-97;
signed char var_14 = (signed char)24;
_Bool var_15 = (_Bool)0;
int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 639036539;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
