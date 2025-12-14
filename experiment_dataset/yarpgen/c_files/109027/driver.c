#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1673688989;
unsigned long long int var_7 = 7209553580928638039ULL;
unsigned char var_10 = (unsigned char)138;
signed char var_13 = (signed char)58;
int zero = 0;
long long int var_14 = 1779332833641902721LL;
unsigned long long int var_15 = 15972836877744437905ULL;
int var_16 = -774263117;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
