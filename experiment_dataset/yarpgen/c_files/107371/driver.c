#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 6000633383386570557ULL;
unsigned long long int var_12 = 16052022478209571119ULL;
unsigned long long int var_14 = 16488370916421746446ULL;
int zero = 0;
short var_20 = (short)-27231;
short var_21 = (short)-4162;
void init() {
}

void checksum() {
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
