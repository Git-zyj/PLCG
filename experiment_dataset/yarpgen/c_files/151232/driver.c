#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)112;
long long int var_11 = -2862215025099935933LL;
int var_16 = -1076452617;
unsigned int var_18 = 1558701863U;
int var_19 = 1183611626;
int zero = 0;
unsigned int var_20 = 3294869571U;
long long int var_21 = -736316819776496802LL;
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
