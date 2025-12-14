#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1858717963;
signed char var_3 = (signed char)6;
int var_4 = 271225529;
_Bool var_5 = (_Bool)0;
int zero = 0;
int var_12 = -104908990;
short var_13 = (short)-22227;
unsigned long long int var_14 = 12221445198477180932ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
