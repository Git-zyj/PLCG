#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)53;
signed char var_4 = (signed char)-43;
signed char var_6 = (signed char)29;
long long int var_7 = -1668138924569159016LL;
long long int var_10 = -9164204004964639392LL;
int zero = 0;
unsigned long long int var_14 = 9168570903894295815ULL;
long long int var_15 = -3728366867915160017LL;
unsigned int var_16 = 3135504477U;
long long int var_17 = -7453598727507443671LL;
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
