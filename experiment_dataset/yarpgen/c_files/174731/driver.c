#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-68;
unsigned long long int var_6 = 2475092162201822590ULL;
signed char var_12 = (signed char)(-127 - 1);
unsigned short var_13 = (unsigned short)49948;
int zero = 0;
long long int var_16 = -5027841391664702040LL;
unsigned long long int var_17 = 7765942080183488231ULL;
void init() {
}

void checksum() {
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
