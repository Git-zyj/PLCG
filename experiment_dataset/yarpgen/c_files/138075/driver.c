#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
_Bool var_1 = (_Bool)0;
short var_6 = (short)5144;
signed char var_7 = (signed char)84;
signed char var_9 = (signed char)23;
unsigned char var_11 = (unsigned char)76;
int zero = 0;
short var_13 = (short)20368;
unsigned int var_14 = 3633278980U;
signed char var_15 = (signed char)85;
unsigned char var_16 = (unsigned char)15;
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
