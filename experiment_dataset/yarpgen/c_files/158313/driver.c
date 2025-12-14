#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)15397;
signed char var_4 = (signed char)31;
unsigned short var_6 = (unsigned short)16817;
signed char var_8 = (signed char)108;
int var_9 = -2012382201;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_14 = (short)-23344;
signed char var_15 = (signed char)74;
unsigned char var_16 = (unsigned char)18;
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
