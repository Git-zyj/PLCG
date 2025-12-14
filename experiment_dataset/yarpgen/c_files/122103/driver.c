#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_7 = (signed char)34;
unsigned int var_10 = 3891798784U;
unsigned short var_12 = (unsigned short)31849;
int zero = 0;
unsigned char var_14 = (unsigned char)238;
unsigned int var_15 = 3759536695U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
