#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7326381794407856014LL;
signed char var_6 = (signed char)-112;
unsigned int var_8 = 2445160875U;
unsigned char var_10 = (unsigned char)230;
long long int var_15 = -202553741000046493LL;
signed char var_18 = (signed char)19;
int zero = 0;
unsigned short var_20 = (unsigned short)4102;
long long int var_21 = 5078020029226795736LL;
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
