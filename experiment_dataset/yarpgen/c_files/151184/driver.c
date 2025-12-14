#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)234;
unsigned short var_9 = (unsigned short)36374;
int zero = 0;
unsigned long long int var_16 = 15734491614617830916ULL;
short var_17 = (short)-336;
unsigned int var_18 = 535285859U;
unsigned char var_19 = (unsigned char)104;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
