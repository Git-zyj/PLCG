#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_7 = 1799384440;
unsigned int var_8 = 3500729516U;
int var_13 = 1736735462;
unsigned char var_15 = (unsigned char)37;
int zero = 0;
signed char var_17 = (signed char)44;
int var_18 = -830521842;
short var_19 = (short)-24820;
long long int var_20 = -9136950056001558587LL;
unsigned char var_21 = (unsigned char)209;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
