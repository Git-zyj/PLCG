#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2856293411U;
unsigned char var_4 = (unsigned char)26;
short var_8 = (short)-32039;
unsigned long long int var_9 = 1322917720921486927ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-14025;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
