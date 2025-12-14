#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25693;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)54313;
_Bool var_4 = (_Bool)1;
long long int var_6 = -6122702562290456702LL;
int var_7 = -2135133272;
unsigned short var_9 = (unsigned short)22831;
int zero = 0;
long long int var_10 = 5715870580498887137LL;
signed char var_11 = (signed char)-17;
long long int var_12 = 707139055958871471LL;
short var_13 = (short)14876;
int var_14 = 310358158;
_Bool arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
