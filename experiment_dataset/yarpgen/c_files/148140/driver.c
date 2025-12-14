#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1227861516;
unsigned int var_4 = 858279584U;
int var_8 = 831001832;
int zero = 0;
short var_10 = (short)-10125;
unsigned int var_11 = 2808436184U;
unsigned int var_12 = 1105980651U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
