#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -476723683;
unsigned char var_2 = (unsigned char)56;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 3777968023671801093ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-12966;
unsigned short var_15 = (unsigned short)38040;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
