#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 6053450801740396797LL;
unsigned short var_9 = (unsigned short)6461;
unsigned short var_10 = (unsigned short)37082;
long long int var_17 = 1096683558462621986LL;
int zero = 0;
int var_18 = 294427078;
int var_19 = 1935892113;
short var_20 = (short)-16373;
unsigned int var_21 = 468291392U;
long long int var_22 = 971470711917764297LL;
unsigned char var_23 = (unsigned char)209;
unsigned int arr_0 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 40953252U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
