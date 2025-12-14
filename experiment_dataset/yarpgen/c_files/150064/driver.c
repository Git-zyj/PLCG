#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1284104135;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)16;
signed char var_12 = (signed char)127;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)31235;
long long int var_15 = -4081410561115830420LL;
unsigned int var_16 = 4031693289U;
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
