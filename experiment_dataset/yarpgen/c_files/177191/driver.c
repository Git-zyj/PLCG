#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23475;
short var_1 = (short)-28329;
int var_4 = -764673915;
_Bool var_5 = (_Bool)1;
short var_8 = (short)-2031;
unsigned long long int var_9 = 11606931779816175132ULL;
short var_10 = (short)10247;
long long int var_13 = 8495362079205077361LL;
int var_14 = 1394660342;
int zero = 0;
int var_15 = 1620446806;
unsigned short var_16 = (unsigned short)39699;
short var_17 = (short)26276;
unsigned long long int arr_1 [19] ;
unsigned long long int arr_2 [19] ;
unsigned long long int arr_7 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 14708464340064764798ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 11822175024538776647ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 12023512680432769198ULL : 3312753527926129692ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
