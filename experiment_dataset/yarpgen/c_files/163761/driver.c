#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -217655298;
unsigned short var_10 = (unsigned short)33878;
long long int var_11 = -9170062048067023258LL;
int zero = 0;
long long int var_14 = 3531290255016563964LL;
long long int var_15 = -1832772030917760567LL;
unsigned long long int var_16 = 16764217652570478200ULL;
long long int var_17 = -3308526740993799903LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
