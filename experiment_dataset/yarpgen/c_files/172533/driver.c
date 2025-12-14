#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3062238857U;
unsigned int var_2 = 772422845U;
unsigned int var_4 = 2525914195U;
int var_5 = 753580829;
unsigned int var_6 = 2168045822U;
unsigned int var_7 = 2098672681U;
int var_11 = 837959424;
int var_13 = -774157447;
int zero = 0;
unsigned int var_15 = 1852620086U;
unsigned int var_16 = 2255260332U;
unsigned int var_17 = 644502832U;
int var_18 = 1930078261;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
