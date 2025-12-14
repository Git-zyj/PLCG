#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_4 = (unsigned char)141;
unsigned int var_8 = 4121940512U;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 7221382032927131674ULL;
int zero = 0;
short var_16 = (short)-3280;
unsigned long long int var_17 = 645443826418213679ULL;
void init() {
}

void checksum() {
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
