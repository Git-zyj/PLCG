#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -14268453;
unsigned long long int var_2 = 17156199394339531099ULL;
unsigned short var_5 = (unsigned short)9111;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-20890;
short var_16 = (short)29586;
short var_17 = (short)12404;
unsigned long long int var_18 = 13391976345867251365ULL;
unsigned short arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)64696;
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
