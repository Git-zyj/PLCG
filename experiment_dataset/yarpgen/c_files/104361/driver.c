#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1045979952153279243LL;
short var_3 = (short)9424;
unsigned long long int var_5 = 168793518825805543ULL;
unsigned short var_9 = (unsigned short)39819;
short var_14 = (short)25072;
unsigned long long int var_15 = 14434019862858550913ULL;
int zero = 0;
short var_17 = (short)15651;
unsigned int var_18 = 3343655753U;
short var_19 = (short)1450;
short arr_0 [24] ;
short arr_1 [24] ;
short arr_4 [24] ;
short arr_6 [24] [24] ;
long long int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)-6516;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)-14320;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-24825;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-30704;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 3077215148334330031LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
