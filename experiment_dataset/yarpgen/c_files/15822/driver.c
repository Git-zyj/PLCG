#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-88;
int var_8 = -1199016118;
unsigned int var_10 = 2669554497U;
unsigned short var_13 = (unsigned short)26454;
int var_15 = -1650159943;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 5981260621750328575ULL;
unsigned int var_18 = 3164299949U;
void init() {
}

void checksum() {
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
