#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15251;
int var_2 = 437634829;
unsigned long long int var_3 = 4904088769030246442ULL;
int var_7 = -750250529;
long long int var_9 = -1168320208110274354LL;
unsigned long long int var_10 = 6593262667968267602ULL;
int var_12 = 1958959579;
int zero = 0;
int var_13 = 102891280;
int var_14 = 1893266581;
void init() {
}

void checksum() {
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
