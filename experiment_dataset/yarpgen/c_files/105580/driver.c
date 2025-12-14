#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 45178309;
unsigned char var_2 = (unsigned char)67;
unsigned long long int var_3 = 8582838109755588707ULL;
int var_5 = 1715819238;
short var_7 = (short)-23848;
short var_11 = (short)-29299;
unsigned char var_13 = (unsigned char)13;
int zero = 0;
unsigned char var_14 = (unsigned char)5;
unsigned long long int var_15 = 13285822165470931109ULL;
short var_16 = (short)18780;
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
