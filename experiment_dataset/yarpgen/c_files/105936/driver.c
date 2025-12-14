#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28003;
short var_5 = (short)-26148;
unsigned long long int var_7 = 13716155265136318096ULL;
long long int var_11 = -1200377087315537365LL;
long long int var_13 = 4441469876702493758LL;
short var_19 = (short)-4450;
int zero = 0;
signed char var_20 = (signed char)-43;
unsigned long long int var_21 = 5937304489561530537ULL;
short var_22 = (short)3119;
unsigned short var_23 = (unsigned short)9640;
unsigned short arr_0 [14] [14] ;
unsigned char arr_3 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)33427;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)154;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
