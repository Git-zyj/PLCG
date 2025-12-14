#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7258075118762947617LL;
long long int var_4 = -3755881375654142554LL;
short var_9 = (short)-21684;
int zero = 0;
signed char var_15 = (signed char)65;
signed char var_16 = (signed char)74;
unsigned short var_17 = (unsigned short)44560;
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
