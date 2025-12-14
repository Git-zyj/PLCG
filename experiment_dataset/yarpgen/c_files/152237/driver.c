#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2036468314U;
short var_3 = (short)13416;
unsigned int var_4 = 2461807497U;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-112;
int var_16 = 184989510;
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
