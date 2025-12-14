#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = 2678335471197148592LL;
long long int var_4 = 8423432842517641629LL;
unsigned long long int var_5 = 9404672454298627134ULL;
short var_10 = (short)-32685;
unsigned char var_12 = (unsigned char)169;
short var_17 = (short)13996;
int zero = 0;
int var_20 = 1709945230;
unsigned int var_21 = 1694105629U;
unsigned short var_22 = (unsigned short)21764;
short var_23 = (short)23375;
unsigned short var_24 = (unsigned short)41419;
unsigned short arr_3 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)24525;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
