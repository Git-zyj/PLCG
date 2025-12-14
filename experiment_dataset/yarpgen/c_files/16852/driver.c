#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30974;
unsigned short var_3 = (unsigned short)26531;
unsigned int var_4 = 1717374514U;
unsigned short var_5 = (unsigned short)8325;
unsigned short var_6 = (unsigned short)45191;
unsigned int var_7 = 2989200861U;
unsigned short var_15 = (unsigned short)47036;
int zero = 0;
unsigned short var_19 = (unsigned short)2713;
unsigned short var_20 = (unsigned short)24086;
unsigned short var_21 = (unsigned short)3328;
unsigned short var_22 = (unsigned short)8427;
unsigned short var_23 = (unsigned short)18636;
short var_24 = (short)-1310;
unsigned short arr_0 [20] ;
int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)39332;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -1426211669;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
