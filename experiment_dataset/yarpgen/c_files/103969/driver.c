#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1181066521U;
long long int var_8 = 888662691277066857LL;
int var_9 = 1957333454;
unsigned int var_11 = 3461661034U;
int zero = 0;
int var_12 = -1025306167;
short var_13 = (short)2618;
long long int var_14 = -1160443826611852553LL;
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
