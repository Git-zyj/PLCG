#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)151;
long long int var_10 = -4384471588286986429LL;
unsigned long long int var_11 = 14825189381215338203ULL;
int zero = 0;
unsigned int var_15 = 959676371U;
int var_16 = 395642437;
unsigned int var_17 = 2160285784U;
unsigned long long int var_18 = 9313390357213512698ULL;
signed char var_19 = (signed char)122;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
