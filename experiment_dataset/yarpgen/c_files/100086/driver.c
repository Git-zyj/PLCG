#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-102;
int var_12 = 620104370;
signed char var_13 = (signed char)83;
int zero = 0;
long long int var_15 = -4998622715536089641LL;
signed char var_16 = (signed char)-84;
signed char var_17 = (signed char)25;
void init() {
}

void checksum() {
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
