#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-26;
unsigned char var_2 = (unsigned char)84;
short var_5 = (short)19105;
unsigned short var_9 = (unsigned short)46261;
int var_11 = 2119504530;
int zero = 0;
signed char var_15 = (signed char)-54;
unsigned short var_16 = (unsigned short)13079;
long long int var_17 = -2262944904904965253LL;
short var_18 = (short)-23309;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)75;
unsigned short arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)716;
}

void checksum() {
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
