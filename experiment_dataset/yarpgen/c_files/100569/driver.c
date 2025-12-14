#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5899657443084511892LL;
long long int var_13 = -7928097563992378649LL;
int zero = 0;
unsigned long long int var_15 = 11473866873913270873ULL;
unsigned long long int var_16 = 3506539193960164465ULL;
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
