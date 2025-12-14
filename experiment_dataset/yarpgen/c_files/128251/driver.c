#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1314220849U;
int var_2 = -1673512100;
unsigned long long int var_4 = 9626071602747600688ULL;
unsigned long long int var_6 = 18296914346922265600ULL;
int var_7 = 1072816042;
short var_8 = (short)-23741;
int zero = 0;
long long int var_10 = -7089104824153978936LL;
unsigned long long int var_11 = 9084389332239924514ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
