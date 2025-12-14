#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)36;
long long int var_1 = -7518455031288502397LL;
int var_2 = -1305246375;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
long long int var_6 = 1926329005341854638LL;
long long int var_8 = 6602336494939713614LL;
int var_9 = -837537747;
_Bool var_10 = (_Bool)1;
long long int var_11 = 787952395088216677LL;
unsigned long long int var_12 = 1136352682664634891ULL;
int zero = 0;
unsigned int var_13 = 2869568674U;
unsigned long long int var_14 = 11965724044554717773ULL;
long long int var_15 = 7991736265687584114LL;
signed char var_16 = (signed char)13;
unsigned char var_17 = (unsigned char)88;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)115;
unsigned char arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned char)100;
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
