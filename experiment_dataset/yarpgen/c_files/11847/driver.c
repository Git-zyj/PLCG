#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6923554673241468232ULL;
signed char var_4 = (signed char)85;
unsigned int var_16 = 1625901068U;
int zero = 0;
unsigned long long int var_20 = 4094327047062412628ULL;
short var_21 = (short)-9792;
signed char var_22 = (signed char)-73;
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
