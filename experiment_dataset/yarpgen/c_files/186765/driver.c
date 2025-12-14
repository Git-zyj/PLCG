#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-1293;
unsigned short var_5 = (unsigned short)43358;
int var_7 = -1783343012;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 879870997U;
unsigned short var_16 = (unsigned short)20578;
unsigned int var_17 = 346172976U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
