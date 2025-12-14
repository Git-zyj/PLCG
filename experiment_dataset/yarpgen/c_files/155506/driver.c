#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)40;
signed char var_5 = (signed char)37;
_Bool var_14 = (_Bool)1;
unsigned int var_18 = 1363654911U;
int zero = 0;
short var_20 = (short)613;
unsigned char var_21 = (unsigned char)168;
void init() {
}

void checksum() {
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
