#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1663155869535245186LL;
short var_2 = (short)9478;
unsigned long long int var_7 = 8550678864437749879ULL;
short var_9 = (short)-4468;
unsigned char var_10 = (unsigned char)5;
signed char var_11 = (signed char)-58;
unsigned char var_12 = (unsigned char)122;
unsigned int var_16 = 2322628602U;
short var_17 = (short)11491;
int zero = 0;
unsigned char var_18 = (unsigned char)229;
int var_19 = -1424892316;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1310808409U;
void init() {
}

void checksum() {
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
