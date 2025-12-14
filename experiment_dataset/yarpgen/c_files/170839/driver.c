#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_6 = (unsigned short)39065;
long long int var_7 = 351580942567090450LL;
signed char var_8 = (signed char)46;
unsigned short var_9 = (unsigned short)5073;
int zero = 0;
unsigned long long int var_12 = 14440444080989898746ULL;
unsigned char var_13 = (unsigned char)159;
unsigned int var_14 = 2233181835U;
int arr_0 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -375872452;
}

void checksum() {
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
