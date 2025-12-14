#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16584916890540769895ULL;
unsigned char var_6 = (unsigned char)247;
unsigned int var_7 = 3459609707U;
unsigned long long int var_9 = 11138631006556721476ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)42;
short var_14 = (short)-19974;
short var_15 = (short)26867;
int var_16 = -1437500932;
unsigned long long int var_17 = 16371369160122446658ULL;
unsigned char var_18 = (unsigned char)231;
unsigned short arr_0 [24] ;
unsigned int arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)34047;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 3528918541U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
