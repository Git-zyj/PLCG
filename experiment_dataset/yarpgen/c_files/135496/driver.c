#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24561;
short var_1 = (short)14367;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)108;
unsigned int var_6 = 3430978061U;
unsigned int var_7 = 2350263796U;
unsigned short var_8 = (unsigned short)42728;
unsigned short var_9 = (unsigned short)59195;
int zero = 0;
unsigned long long int var_10 = 1980105967055928403ULL;
unsigned int var_11 = 689810179U;
unsigned int var_12 = 3873497262U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
