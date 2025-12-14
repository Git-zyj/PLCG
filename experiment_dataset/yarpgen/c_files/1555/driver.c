#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1246527433;
unsigned long long int var_5 = 13259729725647902662ULL;
int zero = 0;
short var_17 = (short)14425;
long long int var_18 = -3262937808317556955LL;
unsigned long long int var_19 = 1418336010240540064ULL;
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
