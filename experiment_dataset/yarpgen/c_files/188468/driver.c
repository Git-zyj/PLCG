#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)30;
unsigned short var_3 = (unsigned short)43779;
unsigned char var_7 = (unsigned char)146;
short var_9 = (short)-3165;
long long int var_12 = -8503927374779806653LL;
int zero = 0;
unsigned int var_14 = 2070265386U;
short var_15 = (short)-12727;
int var_16 = -450895238;
long long int var_17 = -3299798967588237153LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
