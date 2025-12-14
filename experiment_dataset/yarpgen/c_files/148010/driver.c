#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1180111775121474636LL;
short var_2 = (short)-1915;
short var_5 = (short)-25077;
unsigned int var_7 = 3068065492U;
unsigned short var_8 = (unsigned short)16381;
short var_9 = (short)30746;
unsigned char var_12 = (unsigned char)60;
unsigned char var_13 = (unsigned char)5;
long long int var_15 = 1908986288492290759LL;
int zero = 0;
unsigned char var_16 = (unsigned char)54;
long long int var_17 = -1246161758310590442LL;
unsigned char var_18 = (unsigned char)231;
int var_19 = -1018822554;
short var_20 = (short)-25252;
short arr_0 [24] ;
long long int arr_1 [24] [24] ;
unsigned long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)19044;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 3621108768542517371LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 11317588078751502192ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
