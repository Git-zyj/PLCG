#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)6813;
unsigned long long int var_3 = 17527126310126034876ULL;
unsigned short var_12 = (unsigned short)65043;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_17 = (short)19331;
short var_18 = (short)-810;
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
