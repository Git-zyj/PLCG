#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18380976728799235450ULL;
unsigned int var_1 = 1779282219U;
signed char var_2 = (signed char)95;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)175;
unsigned short var_8 = (unsigned short)13083;
int var_9 = 475568492;
unsigned short var_11 = (unsigned short)27479;
short var_13 = (short)11606;
unsigned int var_14 = 578532556U;
int zero = 0;
long long int var_16 = 5043025869656403126LL;
unsigned int var_17 = 783139079U;
long long int var_18 = -3411164283060335217LL;
unsigned int var_19 = 1736115319U;
_Bool var_20 = (_Bool)1;
int arr_0 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -571573388;
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
