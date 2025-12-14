#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4141426146201862644ULL;
long long int var_9 = 2774592472827913201LL;
signed char var_10 = (signed char)40;
unsigned short var_12 = (unsigned short)55956;
int zero = 0;
int var_15 = -60558315;
unsigned char var_16 = (unsigned char)52;
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
