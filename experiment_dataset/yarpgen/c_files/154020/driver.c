#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)35;
_Bool var_8 = (_Bool)0;
unsigned int var_12 = 2945543350U;
signed char var_14 = (signed char)-114;
unsigned char var_16 = (unsigned char)163;
int zero = 0;
unsigned char var_20 = (unsigned char)170;
signed char var_21 = (signed char)85;
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
