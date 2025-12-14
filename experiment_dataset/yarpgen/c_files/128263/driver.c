#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1549192567;
unsigned int var_6 = 1577855544U;
signed char var_7 = (signed char)89;
signed char var_8 = (signed char)-88;
int var_12 = -454705128;
unsigned char var_13 = (unsigned char)154;
int zero = 0;
int var_15 = -1104462643;
unsigned int var_16 = 2571013285U;
signed char var_17 = (signed char)-39;
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
