#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3119106866U;
unsigned int var_8 = 2068535612U;
signed char var_13 = (signed char)78;
long long int var_16 = 4342451593085461247LL;
signed char var_17 = (signed char)64;
int zero = 0;
unsigned char var_20 = (unsigned char)250;
signed char var_21 = (signed char)-57;
unsigned int var_22 = 3334338120U;
void init() {
}

void checksum() {
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
