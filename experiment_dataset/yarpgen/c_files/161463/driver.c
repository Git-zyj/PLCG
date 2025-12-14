#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)45;
short var_2 = (short)7128;
int var_5 = -1893482112;
short var_12 = (short)24191;
int zero = 0;
signed char var_13 = (signed char)-59;
long long int var_14 = 3688940160114219837LL;
signed char var_15 = (signed char)7;
unsigned long long int var_16 = 12438459239420762537ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
