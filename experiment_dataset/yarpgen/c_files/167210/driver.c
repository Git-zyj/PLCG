#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10893572737111713128ULL;
unsigned long long int var_1 = 1972389337699389625ULL;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-32332;
unsigned long long int var_12 = 2210682136870976078ULL;
unsigned char var_13 = (unsigned char)76;
int zero = 0;
unsigned int var_14 = 453399314U;
short var_15 = (short)18090;
unsigned short var_16 = (unsigned short)26100;
long long int var_17 = -2864698978189637045LL;
unsigned int var_18 = 2236782140U;
unsigned long long int arr_7 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 9726251657571834094ULL : 3768407803203073754ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
