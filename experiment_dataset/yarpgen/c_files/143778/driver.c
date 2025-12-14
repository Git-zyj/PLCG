#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5587438105852063773ULL;
unsigned char var_2 = (unsigned char)215;
unsigned char var_3 = (unsigned char)75;
long long int var_4 = -8083357361378427765LL;
_Bool var_5 = (_Bool)1;
int var_6 = 995474007;
int zero = 0;
unsigned short var_14 = (unsigned short)31723;
unsigned short var_15 = (unsigned short)59942;
unsigned char var_16 = (unsigned char)137;
signed char var_17 = (signed char)24;
short var_18 = (short)30631;
short arr_2 [24] ;
int arr_4 [24] [24] [24] ;
unsigned short arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)-26000;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -751804940;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned short)25760;
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
