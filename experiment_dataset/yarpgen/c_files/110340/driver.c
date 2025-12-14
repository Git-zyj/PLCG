#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)22;
unsigned int var_6 = 3750377052U;
long long int var_10 = 3133448302089087565LL;
unsigned char var_15 = (unsigned char)101;
int zero = 0;
unsigned short var_17 = (unsigned short)6962;
short var_18 = (short)18029;
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
