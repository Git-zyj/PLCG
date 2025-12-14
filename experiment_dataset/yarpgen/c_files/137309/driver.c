#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9685498469891689046ULL;
long long int var_4 = 7415391308823182245LL;
unsigned int var_7 = 632800111U;
long long int var_10 = -1328940250545223474LL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)12;
int zero = 0;
long long int var_14 = 2802689640783526276LL;
signed char var_15 = (signed char)-31;
short var_16 = (short)11636;
long long int var_17 = 8495391739374648886LL;
long long int var_18 = 4964032060928173025LL;
long long int var_19 = 7577886991306392367LL;
long long int var_20 = -8928706759065366466LL;
int arr_0 [16] [16] ;
unsigned char arr_1 [16] ;
signed char arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -194650064;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)75;
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
