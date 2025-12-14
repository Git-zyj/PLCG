#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7488657346501283226ULL;
unsigned int var_1 = 1167766545U;
short var_2 = (short)-7467;
unsigned int var_3 = 463973423U;
unsigned int var_9 = 1125406512U;
int zero = 0;
unsigned long long int var_11 = 631901210645156565ULL;
unsigned long long int var_12 = 3182972069561713045ULL;
long long int var_13 = 8955014330811160037LL;
_Bool var_14 = (_Bool)1;
unsigned short arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)23859;
}

void checksum() {
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
