#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3562732018555691267LL;
short var_7 = (short)11683;
unsigned short var_8 = (unsigned short)11357;
int var_13 = -372337612;
int zero = 0;
short var_15 = (short)-3734;
unsigned short var_16 = (unsigned short)51320;
unsigned short var_17 = (unsigned short)47505;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
