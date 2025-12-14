#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61047;
long long int var_4 = -8866719168616981377LL;
signed char var_5 = (signed char)-94;
unsigned short var_7 = (unsigned short)8391;
unsigned long long int var_9 = 16511903887444258129ULL;
unsigned int var_10 = 3589323348U;
unsigned short var_11 = (unsigned short)7362;
long long int var_12 = -7244570934786777568LL;
unsigned long long int var_13 = 13884522515750121397ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)2175;
short var_15 = (short)-2304;
long long int arr_8 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 7811561199373080448LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
