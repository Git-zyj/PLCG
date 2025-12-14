#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8308418939587426698LL;
long long int var_2 = -780212766423876791LL;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-11261;
unsigned char var_5 = (unsigned char)142;
short var_7 = (short)16476;
int var_8 = 1522288150;
int zero = 0;
int var_11 = 1228438223;
unsigned int var_12 = 1582611649U;
unsigned long long int var_13 = 10908169707461265645ULL;
unsigned int var_14 = 4011328944U;
short arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-8575;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
