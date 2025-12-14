#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8592;
unsigned long long int var_5 = 18096611219537834779ULL;
unsigned char var_8 = (unsigned char)255;
short var_9 = (short)-18658;
short var_13 = (short)-8951;
int zero = 0;
short var_14 = (short)11505;
unsigned long long int var_15 = 7588132443473083569ULL;
long long int var_16 = -4491563280705351209LL;
unsigned long long int var_17 = 7927563584960689766ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
