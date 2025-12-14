#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-16582;
short var_6 = (short)21804;
int zero = 0;
long long int var_17 = 9162139810869014874LL;
unsigned long long int var_18 = 9844506745911538238ULL;
unsigned short var_19 = (unsigned short)41884;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
