#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9851;
unsigned short var_1 = (unsigned short)37108;
short var_3 = (short)27026;
_Bool var_4 = (_Bool)1;
int zero = 0;
short var_14 = (short)2168;
unsigned char var_15 = (unsigned char)85;
signed char var_16 = (signed char)98;
int var_17 = -1460663658;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
