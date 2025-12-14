#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)37;
int var_1 = -330203699;
int var_6 = 2075060584;
long long int var_8 = -4998477223769351966LL;
signed char var_11 = (signed char)-31;
int var_12 = -1567980421;
unsigned int var_15 = 714591585U;
int zero = 0;
unsigned char var_19 = (unsigned char)71;
signed char var_20 = (signed char)7;
signed char var_21 = (signed char)16;
short var_22 = (short)20162;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
