#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_6 = (short)4448;
unsigned int var_10 = 3046463060U;
_Bool var_11 = (_Bool)1;
unsigned char var_15 = (unsigned char)206;
int zero = 0;
unsigned long long int var_20 = 10637355314240754516ULL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 10430994679976894371ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
