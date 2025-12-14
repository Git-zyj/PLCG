#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)20007;
short var_4 = (short)9474;
unsigned char var_9 = (unsigned char)38;
int zero = 0;
unsigned char var_15 = (unsigned char)147;
int var_16 = -1213209103;
_Bool var_17 = (_Bool)0;
int var_18 = -2137283320;
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
