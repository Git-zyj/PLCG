#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 859394275;
long long int var_3 = -1481075810847002076LL;
short var_7 = (short)-19665;
unsigned long long int var_8 = 6426876403427078141ULL;
unsigned long long int var_11 = 1395902495453568144ULL;
long long int var_14 = -4340235970788102194LL;
int zero = 0;
int var_15 = 1540449403;
long long int var_16 = 7827787697401649509LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
