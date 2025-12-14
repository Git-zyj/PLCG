#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21620;
unsigned short var_2 = (unsigned short)33636;
unsigned int var_5 = 4236059615U;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 1712444104U;
unsigned long long int var_13 = 18208083053992454808ULL;
unsigned int var_14 = 1465937633U;
unsigned long long int var_15 = 6975335079346972653ULL;
unsigned int var_16 = 4220381261U;
unsigned int var_17 = 1051470765U;
int zero = 0;
short var_18 = (short)-30540;
short var_19 = (short)-7416;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
