#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-23;
_Bool var_2 = (_Bool)0;
short var_3 = (short)19417;
int var_5 = -582003172;
signed char var_8 = (signed char)-44;
short var_12 = (short)25997;
long long int var_14 = 7704983484896748948LL;
int zero = 0;
int var_15 = -1484774124;
signed char var_16 = (signed char)-68;
void init() {
}

void checksum() {
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
