#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_4 = -879173583;
unsigned short var_7 = (unsigned short)51856;
int var_11 = 1804949419;
int zero = 0;
unsigned int var_15 = 599202737U;
long long int var_16 = 1231744874267757214LL;
int var_17 = -1060200074;
unsigned short var_18 = (unsigned short)25154;
unsigned int var_19 = 2215761478U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
