#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1187281035;
unsigned short var_6 = (unsigned short)36199;
unsigned int var_12 = 727572555U;
signed char var_15 = (signed char)86;
int zero = 0;
signed char var_16 = (signed char)-94;
unsigned long long int var_17 = 10808896544441962783ULL;
unsigned short var_18 = (unsigned short)45520;
signed char var_19 = (signed char)-51;
short var_20 = (short)28260;
_Bool arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
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
