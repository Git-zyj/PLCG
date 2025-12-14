#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27537;
int var_2 = 218595259;
unsigned short var_6 = (unsigned short)21097;
unsigned char var_8 = (unsigned char)209;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2468817276U;
int zero = 0;
unsigned short var_14 = (unsigned short)9455;
int var_15 = 1224206316;
unsigned short var_16 = (unsigned short)36955;
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
