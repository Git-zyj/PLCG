#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-89;
int var_4 = -438874308;
unsigned short var_10 = (unsigned short)18693;
unsigned short var_16 = (unsigned short)6758;
int zero = 0;
signed char var_19 = (signed char)-71;
short var_20 = (short)25670;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
