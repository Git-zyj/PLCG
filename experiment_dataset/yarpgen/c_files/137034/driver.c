#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1898282303;
unsigned short var_6 = (unsigned short)21046;
long long int var_7 = 5030707315970089218LL;
int var_8 = -1808592155;
int var_9 = 189697436;
int var_10 = 243063902;
unsigned short var_12 = (unsigned short)29320;
unsigned long long int var_13 = 7071746735930603964ULL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)48823;
unsigned char var_17 = (unsigned char)71;
unsigned short var_18 = (unsigned short)26115;
int var_19 = -2072708115;
signed char arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-105;
}

void checksum() {
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
