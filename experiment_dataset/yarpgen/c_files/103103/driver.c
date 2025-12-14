#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 5085696502146344629LL;
short var_6 = (short)-21993;
unsigned int var_10 = 2511970706U;
unsigned char var_12 = (unsigned char)119;
int zero = 0;
unsigned long long int var_16 = 3955367000377143722ULL;
unsigned char var_17 = (unsigned char)101;
_Bool var_18 = (_Bool)1;
unsigned short arr_0 [18] [18] ;
unsigned char arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)46940;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)245;
}

void checksum() {
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
