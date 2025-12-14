#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22182;
int var_2 = 159700011;
_Bool var_3 = (_Bool)0;
unsigned long long int var_7 = 11765310608193900069ULL;
unsigned int var_9 = 411640348U;
int zero = 0;
unsigned short var_16 = (unsigned short)7260;
short var_17 = (short)17742;
void init() {
}

void checksum() {
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
