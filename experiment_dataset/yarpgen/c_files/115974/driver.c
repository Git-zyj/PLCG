#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2351031152U;
unsigned int var_3 = 4126451778U;
unsigned int var_8 = 2808298932U;
long long int var_11 = 1108428646665345039LL;
int zero = 0;
unsigned short var_18 = (unsigned short)32468;
signed char var_19 = (signed char)-57;
int var_20 = -491962553;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
