#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)156;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 17672122023619735076ULL;
short var_7 = (short)-21183;
signed char var_8 = (signed char)33;
unsigned long long int var_11 = 13428612388339078734ULL;
unsigned char var_12 = (unsigned char)239;
unsigned short var_13 = (unsigned short)20450;
unsigned int var_15 = 4060014530U;
int zero = 0;
unsigned int var_17 = 2526285294U;
unsigned int var_18 = 3164338742U;
long long int var_19 = 2750513405101725268LL;
void init() {
}

void checksum() {
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
