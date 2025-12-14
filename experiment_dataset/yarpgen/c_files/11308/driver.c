#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24237;
unsigned int var_8 = 799579559U;
unsigned char var_13 = (unsigned char)90;
int zero = 0;
int var_15 = -1224281101;
int var_16 = -2002047473;
long long int var_17 = 8444274439228700238LL;
unsigned short var_18 = (unsigned short)51550;
unsigned long long int var_19 = 11502524020697570197ULL;
signed char arr_0 [23] ;
unsigned short arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)15963;
}

void checksum() {
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
