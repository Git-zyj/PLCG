#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21830;
unsigned long long int var_4 = 3752456686111159755ULL;
long long int var_5 = 3138439818164716803LL;
unsigned long long int var_6 = 10480560111152700788ULL;
signed char var_8 = (signed char)-73;
short var_10 = (short)-24535;
int zero = 0;
unsigned long long int var_11 = 13084849235888981912ULL;
unsigned short var_12 = (unsigned short)33370;
long long int var_13 = -3978894152080583326LL;
long long int var_14 = -5183878577335076466LL;
short var_15 = (short)-8563;
unsigned short arr_1 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)31790;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
