#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 1914635010443623049LL;
int var_10 = -1434863227;
unsigned char var_11 = (unsigned char)138;
int zero = 0;
unsigned int var_13 = 984396513U;
long long int var_14 = -975111798613728295LL;
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
