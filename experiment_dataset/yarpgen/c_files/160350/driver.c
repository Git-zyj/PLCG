#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 256141089290498416LL;
long long int var_10 = -3516995948938820593LL;
_Bool var_11 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 5632702549309482795ULL;
unsigned short var_17 = (unsigned short)60652;
unsigned char var_18 = (unsigned char)192;
unsigned long long int var_19 = 151068989060157456ULL;
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
