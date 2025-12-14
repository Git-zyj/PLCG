#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)231;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2103764460U;
short var_18 = (short)25996;
int zero = 0;
long long int var_19 = -5291499718541165151LL;
short var_20 = (short)-2829;
signed char var_21 = (signed char)-70;
void init() {
}

void checksum() {
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
