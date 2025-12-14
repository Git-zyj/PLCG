#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60987;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)149;
short var_10 = (short)10520;
unsigned short var_12 = (unsigned short)2859;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)234;
int zero = 0;
short var_17 = (short)-14144;
_Bool var_18 = (_Bool)0;
long long int var_19 = 6715604247451484985LL;
long long int var_20 = -4066732243338010LL;
short var_21 = (short)-2834;
int arr_0 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -1205033450;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
