#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)51815;
unsigned short var_8 = (unsigned short)62404;
int var_9 = 1643594404;
long long int var_10 = -4917044563254068856LL;
int zero = 0;
short var_13 = (short)-977;
short var_14 = (short)-31227;
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
