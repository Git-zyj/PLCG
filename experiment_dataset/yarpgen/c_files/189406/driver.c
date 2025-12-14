#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4789665236646906761LL;
unsigned char var_2 = (unsigned char)126;
short var_3 = (short)-29309;
short var_6 = (short)18918;
int var_7 = 1822300496;
int zero = 0;
unsigned short var_13 = (unsigned short)26323;
long long int var_14 = 91532537988547160LL;
int var_15 = -1097127514;
int var_16 = 438518105;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
