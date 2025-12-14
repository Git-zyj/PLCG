#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)17;
int var_5 = 469957833;
unsigned char var_7 = (unsigned char)37;
short var_11 = (short)-30928;
int zero = 0;
signed char var_12 = (signed char)115;
long long int var_13 = -9097724356494446963LL;
unsigned short var_14 = (unsigned short)20731;
unsigned long long int var_15 = 3571722677822705953ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
