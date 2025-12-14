#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3200480727U;
unsigned char var_5 = (unsigned char)67;
signed char var_6 = (signed char)-64;
_Bool var_8 = (_Bool)0;
short var_9 = (short)15557;
int zero = 0;
int var_11 = -919834838;
unsigned char var_12 = (unsigned char)61;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
