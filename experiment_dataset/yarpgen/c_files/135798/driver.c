#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6371575170932692369LL;
unsigned char var_1 = (unsigned char)209;
long long int var_2 = 8304688761693010343LL;
unsigned int var_3 = 924490292U;
unsigned char var_6 = (unsigned char)200;
long long int var_7 = 3701917600248906058LL;
unsigned int var_9 = 1246399264U;
unsigned char var_10 = (unsigned char)61;
int zero = 0;
long long int var_11 = -6639221525863709752LL;
unsigned char var_12 = (unsigned char)117;
long long int var_13 = -6867333464945327778LL;
unsigned int var_14 = 1475264753U;
unsigned int var_15 = 1995315646U;
unsigned char var_16 = (unsigned char)142;
unsigned int arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 1377933276U : 2919303629U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
