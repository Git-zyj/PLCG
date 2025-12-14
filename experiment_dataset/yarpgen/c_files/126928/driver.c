#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 1821063312;
unsigned short var_13 = (unsigned short)51886;
unsigned short var_14 = (unsigned short)32845;
int zero = 0;
unsigned char var_17 = (unsigned char)110;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 2047453566339449514ULL;
unsigned short arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)36692;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
