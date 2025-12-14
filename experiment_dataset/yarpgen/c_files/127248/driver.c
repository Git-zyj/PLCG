#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4074047301U;
unsigned short var_4 = (unsigned short)32705;
short var_10 = (short)9796;
signed char var_17 = (signed char)-80;
unsigned long long int var_18 = 3652217456461376263ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)36489;
unsigned int var_20 = 4266839451U;
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
