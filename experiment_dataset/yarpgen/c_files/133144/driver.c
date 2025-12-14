#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2848371982U;
short var_2 = (short)9346;
long long int var_4 = 8562177122363477313LL;
signed char var_11 = (signed char)-11;
int zero = 0;
unsigned short var_18 = (unsigned short)61890;
unsigned long long int var_19 = 16259049293398876789ULL;
long long int var_20 = 5659323635122159662LL;
unsigned short var_21 = (unsigned short)4831;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
