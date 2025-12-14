#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-2;
signed char var_2 = (signed char)87;
long long int var_4 = -3732787294013059615LL;
int var_6 = -7956117;
long long int var_8 = -9138957116528336355LL;
unsigned short var_10 = (unsigned short)34120;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)31504;
long long int var_17 = 4805172606321875183LL;
unsigned long long int arr_1 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 12965634948880684681ULL;
}

void checksum() {
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
