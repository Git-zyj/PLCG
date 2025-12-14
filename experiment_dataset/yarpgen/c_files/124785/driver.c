#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2315179656U;
unsigned int var_9 = 1145565814U;
unsigned char var_11 = (unsigned char)101;
int zero = 0;
signed char var_19 = (signed char)-22;
unsigned char var_20 = (unsigned char)156;
unsigned int var_21 = 3988441595U;
short var_22 = (short)8717;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
