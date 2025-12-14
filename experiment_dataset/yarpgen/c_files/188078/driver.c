#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4868;
long long int var_1 = -2867069865896559774LL;
long long int var_2 = 807817698515049791LL;
long long int var_3 = 8306756980754133340LL;
long long int var_5 = -8519034749837036776LL;
long long int var_6 = 4297323419812129761LL;
signed char var_7 = (signed char)-43;
unsigned short var_8 = (unsigned short)6847;
unsigned short var_9 = (unsigned short)23555;
int var_10 = 535470768;
unsigned int var_12 = 2167858590U;
int zero = 0;
short var_15 = (short)4320;
short var_16 = (short)-8686;
long long int var_17 = 5715768227483915897LL;
unsigned char var_18 = (unsigned char)216;
unsigned long long int var_19 = 903639556063265517ULL;
unsigned int var_20 = 1549376572U;
signed char arr_0 [21] [21] ;
_Bool arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
