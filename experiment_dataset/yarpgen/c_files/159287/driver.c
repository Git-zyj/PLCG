#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-88;
_Bool var_9 = (_Bool)1;
unsigned char var_15 = (unsigned char)25;
int zero = 0;
unsigned char var_16 = (unsigned char)250;
unsigned int var_17 = 2906770199U;
unsigned short var_18 = (unsigned short)27985;
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
