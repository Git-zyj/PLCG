#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4914;
int var_4 = 1659198736;
unsigned int var_7 = 281254947U;
int var_10 = 1316067747;
unsigned int var_12 = 4283319580U;
int zero = 0;
long long int var_18 = 7933753833844293086LL;
unsigned int var_19 = 1660987602U;
void init() {
}

void checksum() {
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
