#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1496212231;
int var_1 = 408063467;
int var_5 = 936266565;
int var_7 = -1724958935;
long long int var_9 = -2480077071274985126LL;
int zero = 0;
short var_14 = (short)-748;
int var_15 = -635605788;
void init() {
}

void checksum() {
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
