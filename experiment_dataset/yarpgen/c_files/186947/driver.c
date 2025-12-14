#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -660706609;
int var_4 = 519526855;
_Bool var_5 = (_Bool)1;
int var_6 = -952968644;
unsigned short var_8 = (unsigned short)44053;
int var_9 = -1257059330;
signed char var_12 = (signed char)16;
int zero = 0;
long long int var_13 = 6806959001733427622LL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)60019;
long long int var_17 = -505397690981358740LL;
_Bool var_18 = (_Bool)1;
int var_19 = 1014785266;
unsigned short arr_0 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)43677;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
