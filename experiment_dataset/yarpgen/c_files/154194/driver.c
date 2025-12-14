#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1406817754U;
unsigned long long int var_3 = 16874176333085251231ULL;
unsigned long long int var_7 = 6198008447972077458ULL;
signed char var_13 = (signed char)66;
unsigned short var_14 = (unsigned short)49618;
long long int var_16 = 114097639083591166LL;
short var_17 = (short)-264;
int var_19 = -427301325;
int zero = 0;
long long int var_20 = -750926001518386080LL;
short var_21 = (short)13009;
int var_22 = -1757063598;
unsigned short var_23 = (unsigned short)29868;
unsigned short var_24 = (unsigned short)45914;
short arr_9 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (short)-28704;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
