#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6949781130372375087ULL;
unsigned short var_1 = (unsigned short)37921;
long long int var_3 = -8267966418201566336LL;
signed char var_9 = (signed char)-12;
long long int var_10 = 2307780478920701729LL;
long long int var_11 = -6786523714743637721LL;
unsigned int var_12 = 4261425096U;
unsigned int var_13 = 258194672U;
int zero = 0;
unsigned short var_15 = (unsigned short)15300;
long long int var_16 = 8482985201442589877LL;
signed char var_17 = (signed char)-78;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
