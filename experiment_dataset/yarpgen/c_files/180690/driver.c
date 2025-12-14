#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19997;
int var_2 = 1864325527;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)32441;
unsigned int var_8 = 2579009773U;
int var_9 = -1329867239;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 5527292983998605602ULL;
short var_12 = (short)1439;
unsigned short var_13 = (unsigned short)1213;
signed char var_14 = (signed char)25;
void init() {
}

void checksum() {
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
