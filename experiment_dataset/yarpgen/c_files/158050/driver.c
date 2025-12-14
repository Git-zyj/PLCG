#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2365101261U;
signed char var_4 = (signed char)60;
short var_6 = (short)6821;
int zero = 0;
unsigned char var_14 = (unsigned char)181;
unsigned long long int var_15 = 7184525925630053489ULL;
long long int var_16 = 4199329303097049166LL;
unsigned int var_17 = 1216578592U;
unsigned short arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)62331;
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
