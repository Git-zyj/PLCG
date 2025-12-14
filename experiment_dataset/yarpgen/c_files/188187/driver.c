#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4862376039917838937LL;
short var_2 = (short)17;
unsigned int var_3 = 60737781U;
unsigned long long int var_4 = 527490590219891221ULL;
unsigned int var_7 = 4101961558U;
long long int var_11 = -3988303860016269471LL;
int var_12 = -686686102;
int zero = 0;
long long int var_13 = -2014720173693545203LL;
unsigned short var_14 = (unsigned short)22032;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)3;
unsigned int var_17 = 853198359U;
short arr_8 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)19741 : (short)1111;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
