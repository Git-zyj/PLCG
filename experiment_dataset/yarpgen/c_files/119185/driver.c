#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6720922625696169256LL;
int var_3 = 900013018;
short var_4 = (short)-15102;
unsigned long long int var_8 = 7324787029056849527ULL;
int var_10 = -1966651542;
signed char var_11 = (signed char)-5;
unsigned char var_13 = (unsigned char)214;
int zero = 0;
unsigned long long int var_14 = 15198870125837689985ULL;
unsigned char var_15 = (unsigned char)142;
int var_16 = 839466353;
short var_17 = (short)23092;
short var_18 = (short)-7704;
signed char var_19 = (signed char)60;
_Bool var_20 = (_Bool)0;
unsigned int arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2498066416U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
