#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3319975693719301134LL;
int var_4 = 1401676879;
unsigned int var_6 = 4163717103U;
long long int var_13 = -4186129140733733979LL;
int zero = 0;
unsigned long long int var_15 = 9669915077299938684ULL;
int var_16 = 1349695160;
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
