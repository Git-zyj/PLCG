#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29180;
signed char var_4 = (signed char)126;
unsigned int var_5 = 3852310866U;
unsigned long long int var_7 = 3237849755443060043ULL;
int var_8 = -633526616;
int zero = 0;
unsigned char var_10 = (unsigned char)164;
short var_11 = (short)1158;
signed char var_12 = (signed char)92;
unsigned char var_13 = (unsigned char)38;
long long int var_14 = -588646432258888620LL;
unsigned int var_15 = 876310800U;
unsigned short arr_1 [18] [18] ;
unsigned char arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)41046;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)42;
}

void checksum() {
    hash(&seed, var_10);
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
