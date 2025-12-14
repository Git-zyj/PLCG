#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2007561466U;
long long int var_2 = -3952542631622381662LL;
int var_8 = -1175759675;
int zero = 0;
long long int var_11 = -2606338080598563952LL;
unsigned long long int var_12 = 9087496215337680790ULL;
void init() {
}

void checksum() {
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
