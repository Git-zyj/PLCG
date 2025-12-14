#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)54;
unsigned long long int var_7 = 1534821551730341718ULL;
signed char var_11 = (signed char)95;
unsigned int var_14 = 1922008206U;
unsigned char var_16 = (unsigned char)119;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)20924;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
