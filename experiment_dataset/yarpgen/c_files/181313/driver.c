#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5992396793106896407LL;
long long int var_4 = -6517838381678961557LL;
short var_5 = (short)24632;
short var_7 = (short)10389;
_Bool var_8 = (_Bool)0;
long long int var_10 = -8668731858609895755LL;
int var_12 = -1543634546;
int zero = 0;
unsigned int var_14 = 1381682755U;
signed char var_15 = (signed char)114;
long long int var_16 = -2273523698868401796LL;
unsigned int var_17 = 3923414905U;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 3161466701886110048ULL;
unsigned int arr_0 [12] ;
long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3877965751U : 3001749081U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 1464167395439967896LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
