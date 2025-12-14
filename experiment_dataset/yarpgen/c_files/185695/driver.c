#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9305;
unsigned char var_6 = (unsigned char)120;
_Bool var_7 = (_Bool)1;
long long int var_11 = -3439578735617930130LL;
unsigned char var_12 = (unsigned char)27;
unsigned char var_15 = (unsigned char)111;
int var_16 = 500119263;
int zero = 0;
unsigned short var_17 = (unsigned short)49216;
unsigned int var_18 = 1353276321U;
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
