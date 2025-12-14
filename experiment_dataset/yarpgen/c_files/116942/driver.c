#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7394591799683705633LL;
long long int var_6 = -3701177390023747690LL;
long long int var_7 = 7832824372895532069LL;
unsigned long long int var_10 = 495657519310628902ULL;
short var_11 = (short)-1373;
int zero = 0;
unsigned int var_12 = 4239422506U;
unsigned int var_13 = 2587322833U;
signed char var_14 = (signed char)-19;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
