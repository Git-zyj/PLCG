#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)18882;
unsigned long long int var_6 = 6045158833006527426ULL;
short var_7 = (short)11349;
unsigned int var_13 = 1082814671U;
unsigned int var_14 = 1108719766U;
int zero = 0;
unsigned int var_17 = 2003678333U;
short var_18 = (short)19395;
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
