#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4067023542U;
unsigned int var_5 = 2432257486U;
int var_6 = -631281776;
short var_9 = (short)29185;
int zero = 0;
int var_10 = 310649898;
long long int var_11 = -2615347221680446908LL;
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
