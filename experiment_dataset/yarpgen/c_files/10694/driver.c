#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9888;
int var_1 = -393864226;
_Bool var_2 = (_Bool)1;
int var_4 = 839877111;
signed char var_6 = (signed char)79;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)-75;
int zero = 0;
unsigned short var_11 = (unsigned short)6732;
_Bool var_12 = (_Bool)0;
int var_13 = 1641535231;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
