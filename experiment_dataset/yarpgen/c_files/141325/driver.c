#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1085837899;
short var_4 = (short)-14390;
long long int var_5 = 5920649475563394133LL;
long long int var_8 = 4445757895286770134LL;
int zero = 0;
short var_12 = (short)20390;
long long int var_13 = -3646196076488683736LL;
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
