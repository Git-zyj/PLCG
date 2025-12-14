#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3253412121U;
long long int var_4 = -4380535407770329434LL;
unsigned int var_9 = 163434886U;
int zero = 0;
short var_15 = (short)26882;
int var_16 = -1432463595;
unsigned short var_17 = (unsigned short)60854;
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
