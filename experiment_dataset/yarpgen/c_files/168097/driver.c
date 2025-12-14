#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5600013194928606064LL;
unsigned int var_3 = 1598804697U;
unsigned char var_5 = (unsigned char)58;
long long int var_7 = -2978041733149112310LL;
int var_8 = -2115127539;
signed char var_13 = (signed char)-87;
int zero = 0;
unsigned int var_14 = 915105763U;
signed char var_15 = (signed char)-67;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
