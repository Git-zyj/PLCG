#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
short var_3 = (short)31962;
int var_5 = 1752737180;
unsigned int var_7 = 860736277U;
unsigned char var_9 = (unsigned char)132;
unsigned char var_10 = (unsigned char)79;
int zero = 0;
unsigned short var_11 = (unsigned short)56320;
unsigned long long int var_12 = 8791803035799936718ULL;
short var_13 = (short)9980;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
