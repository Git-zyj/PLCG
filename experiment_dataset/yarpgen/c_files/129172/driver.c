#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39328;
short var_1 = (short)-22265;
int var_2 = 564657451;
unsigned int var_3 = 1159117849U;
unsigned short var_7 = (unsigned short)15744;
signed char var_9 = (signed char)121;
short var_13 = (short)-12188;
int zero = 0;
unsigned long long int var_16 = 9307867532908940650ULL;
short var_17 = (short)3246;
long long int var_18 = -5898272437042238283LL;
void init() {
}

void checksum() {
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
