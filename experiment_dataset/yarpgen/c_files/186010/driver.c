#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34422;
signed char var_1 = (signed char)88;
unsigned short var_2 = (unsigned short)51452;
unsigned short var_4 = (unsigned short)47280;
signed char var_5 = (signed char)-27;
unsigned short var_7 = (unsigned short)16267;
unsigned short var_9 = (unsigned short)34199;
signed char var_10 = (signed char)-84;
int zero = 0;
unsigned short var_11 = (unsigned short)20475;
unsigned short var_12 = (unsigned short)9937;
unsigned short var_13 = (unsigned short)55798;
unsigned short var_14 = (unsigned short)53719;
unsigned short arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)38132;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
