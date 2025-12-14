#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)56;
unsigned int var_6 = 517201293U;
long long int var_7 = -5499537133331001910LL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)43827;
int var_18 = 72655320;
unsigned char var_19 = (unsigned char)47;
void init() {
}

void checksum() {
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
