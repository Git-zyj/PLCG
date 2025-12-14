#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 5553349822915689446LL;
unsigned short var_7 = (unsigned short)65365;
long long int var_14 = 4256342522815162381LL;
unsigned int var_16 = 2859691251U;
int zero = 0;
long long int var_17 = -9205113711463345158LL;
short var_18 = (short)29648;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)39650;
signed char var_21 = (signed char)-96;
_Bool arr_0 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
