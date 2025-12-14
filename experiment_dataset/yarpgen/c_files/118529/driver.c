#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-66;
signed char var_1 = (signed char)-103;
short var_3 = (short)13345;
unsigned int var_4 = 1345067883U;
unsigned long long int var_9 = 2677678217764352924ULL;
long long int var_10 = -4081744198608622271LL;
unsigned long long int var_11 = 9208629989077340620ULL;
unsigned char var_12 = (unsigned char)96;
unsigned long long int var_13 = 17102371808079650458ULL;
int zero = 0;
short var_16 = (short)27975;
signed char var_17 = (signed char)66;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
