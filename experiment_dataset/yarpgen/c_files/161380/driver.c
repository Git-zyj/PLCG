#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5985573911249507150ULL;
unsigned int var_11 = 2076440670U;
unsigned short var_13 = (unsigned short)9682;
int zero = 0;
int var_17 = 1376228930;
int var_18 = -755158434;
unsigned int var_19 = 1349061239U;
unsigned int var_20 = 758054611U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
