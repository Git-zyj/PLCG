#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15513448320657114690ULL;
unsigned int var_1 = 2646427892U;
unsigned short var_3 = (unsigned short)9695;
unsigned char var_4 = (unsigned char)130;
signed char var_5 = (signed char)-34;
unsigned int var_10 = 1882604572U;
short var_12 = (short)16389;
unsigned char var_13 = (unsigned char)50;
int zero = 0;
int var_14 = -538477926;
short var_15 = (short)23271;
long long int var_16 = 7998942774127914313LL;
unsigned int var_17 = 4025562093U;
signed char var_18 = (signed char)-34;
unsigned short var_19 = (unsigned short)30386;
long long int var_20 = -4937648104813072020LL;
unsigned char var_21 = (unsigned char)196;
unsigned int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 3873782717U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
