#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)230;
short var_7 = (short)-32590;
short var_13 = (short)14976;
signed char var_15 = (signed char)61;
int var_17 = 398890408;
int zero = 0;
unsigned short var_19 = (unsigned short)59663;
short var_20 = (short)29966;
short var_21 = (short)-21050;
unsigned long long int var_22 = 15548196848990204362ULL;
long long int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 6054682423734904212LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
