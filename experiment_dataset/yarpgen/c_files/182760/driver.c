#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_15 = (unsigned short)34721;
signed char var_16 = (signed char)-120;
int zero = 0;
unsigned int var_20 = 3580780341U;
unsigned long long int var_21 = 451238520840427206ULL;
long long int var_22 = -7301892283396410304LL;
void init() {
}

void checksum() {
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
