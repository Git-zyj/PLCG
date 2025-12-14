#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5939131328145616426LL;
long long int var_4 = -4493728405858591770LL;
long long int var_7 = -8494507652857961673LL;
unsigned char var_8 = (unsigned char)74;
_Bool var_9 = (_Bool)0;
long long int var_10 = -7451870570148230731LL;
int zero = 0;
signed char var_13 = (signed char)-94;
unsigned char var_14 = (unsigned char)175;
unsigned char var_15 = (unsigned char)72;
long long int var_16 = 1410540068096231791LL;
unsigned char var_17 = (unsigned char)235;
int var_18 = 170256284;
short arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-22421;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
