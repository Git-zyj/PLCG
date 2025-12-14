#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)25406;
unsigned char var_12 = (unsigned char)182;
signed char var_14 = (signed char)39;
int zero = 0;
long long int var_16 = -2504714543616438680LL;
short var_17 = (short)2761;
unsigned short var_18 = (unsigned short)28704;
short var_19 = (short)-24997;
int arr_2 [20] ;
unsigned short arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 1536219206;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)47877;
}

void checksum() {
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
