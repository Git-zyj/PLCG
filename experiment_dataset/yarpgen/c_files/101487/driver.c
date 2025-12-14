#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3286854213U;
unsigned int var_1 = 3708411218U;
unsigned short var_2 = (unsigned short)16433;
_Bool var_3 = (_Bool)1;
int var_6 = -226473641;
unsigned long long int var_8 = 6633328816128704449ULL;
long long int var_9 = -2826158261595305973LL;
int zero = 0;
unsigned long long int var_11 = 4585935303797636460ULL;
unsigned int var_12 = 383950395U;
unsigned int var_13 = 3158383957U;
long long int var_14 = 5320225548843633733LL;
short var_15 = (short)-14573;
short var_16 = (short)27667;
unsigned short arr_0 [10] ;
int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)36476;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -1450181879;
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
