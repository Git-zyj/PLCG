#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8311938730696843971ULL;
signed char var_5 = (signed char)108;
unsigned long long int var_6 = 17829854959536562458ULL;
signed char var_7 = (signed char)-98;
long long int var_8 = 9156348240860101069LL;
int zero = 0;
long long int var_10 = -7288359819799809845LL;
unsigned short var_11 = (unsigned short)6965;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-7668;
signed char var_14 = (signed char)23;
unsigned long long int var_15 = 17787426554149648065ULL;
unsigned char arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)183;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
