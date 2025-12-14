#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1494073548;
unsigned long long int var_1 = 6194592917164226835ULL;
short var_2 = (short)28103;
long long int var_3 = 1747331594099396429LL;
unsigned short var_4 = (unsigned short)34023;
int var_5 = 474623732;
signed char var_6 = (signed char)-65;
unsigned int var_8 = 2636081731U;
int zero = 0;
int var_11 = -315718229;
long long int var_12 = 3589728933552535333LL;
unsigned short var_13 = (unsigned short)49717;
unsigned char var_14 = (unsigned char)232;
unsigned short var_15 = (unsigned short)30634;
short var_16 = (short)-15581;
short arr_0 [10] ;
_Bool arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)-31724;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
