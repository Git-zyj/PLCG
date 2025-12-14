#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)85;
unsigned char var_6 = (unsigned char)0;
long long int var_9 = -993273321731778186LL;
signed char var_11 = (signed char)52;
int zero = 0;
unsigned short var_14 = (unsigned short)36912;
int var_15 = 1579133289;
unsigned int var_16 = 2608320767U;
unsigned char var_17 = (unsigned char)52;
long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -4613840419221132404LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
