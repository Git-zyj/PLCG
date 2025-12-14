#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6883;
short var_3 = (short)21041;
short var_6 = (short)2883;
short var_8 = (short)2090;
short var_9 = (short)-25117;
int zero = 0;
short var_13 = (short)19383;
short var_14 = (short)-9930;
short var_15 = (short)-28358;
void init() {
}

void checksum() {
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
