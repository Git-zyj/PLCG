#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)1;
unsigned long long int var_4 = 4163210801340304036ULL;
unsigned long long int var_6 = 13269476700963008281ULL;
unsigned int var_9 = 1495450299U;
int var_11 = 1356277614;
int var_12 = 1321704841;
int zero = 0;
unsigned long long int var_13 = 5532565043773726735ULL;
short var_14 = (short)7390;
int var_15 = -324537274;
unsigned int var_16 = 530887611U;
unsigned long long int var_17 = 253734407219685904ULL;
int arr_1 [11] ;
short arr_2 [11] [11] ;
long long int arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1685302112 : -1131707884;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-4213;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 7679923167247038289LL : 8483017647920729109LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
