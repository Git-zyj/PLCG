#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-2;
unsigned int var_5 = 2041555573U;
int var_6 = -102980825;
int var_7 = 372413825;
long long int var_8 = 2248069704534297198LL;
int zero = 0;
unsigned char var_12 = (unsigned char)58;
short var_13 = (short)17340;
long long int var_14 = -2320387535969076585LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
