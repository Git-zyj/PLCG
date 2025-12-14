#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13088175582740823919ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)31097;
short var_4 = (short)-28218;
unsigned long long int var_5 = 6091201983689543062ULL;
unsigned long long int var_7 = 14541905859703537653ULL;
int zero = 0;
unsigned long long int var_10 = 12712928556312823724ULL;
unsigned char var_11 = (unsigned char)248;
unsigned char var_12 = (unsigned char)158;
unsigned short var_13 = (unsigned short)10174;
unsigned long long int var_14 = 8490008624768774682ULL;
short var_15 = (short)19825;
_Bool arr_2 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)1;
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
