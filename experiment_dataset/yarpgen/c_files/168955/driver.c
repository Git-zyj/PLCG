#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1493437432;
unsigned int var_6 = 1061697431U;
int var_16 = -327332911;
int zero = 0;
unsigned long long int var_17 = 11269945221814267951ULL;
unsigned long long int var_18 = 4259680975665493898ULL;
signed char var_19 = (signed char)5;
unsigned char var_20 = (unsigned char)14;
long long int var_21 = 5934192656558109293LL;
unsigned char var_22 = (unsigned char)97;
long long int arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -3962902599112059311LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
