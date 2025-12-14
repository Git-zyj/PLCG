#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2264549140U;
signed char var_1 = (signed char)-71;
_Bool var_6 = (_Bool)1;
int var_10 = 1128078127;
unsigned char var_13 = (unsigned char)104;
int var_14 = 594734994;
int zero = 0;
short var_15 = (short)13981;
_Bool var_16 = (_Bool)1;
short var_17 = (short)9077;
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
