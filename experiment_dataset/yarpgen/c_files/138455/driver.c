#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-49;
_Bool var_9 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)38438;
unsigned short var_16 = (unsigned short)55108;
int var_17 = -71454530;
int zero = 0;
unsigned short var_19 = (unsigned short)52412;
unsigned short var_20 = (unsigned short)32856;
short var_21 = (short)-7037;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
