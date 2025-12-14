#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11260284060318613965ULL;
short var_5 = (short)-15704;
signed char var_12 = (signed char)43;
int zero = 0;
short var_19 = (short)-5148;
unsigned long long int var_20 = 10077794250389508177ULL;
unsigned char var_21 = (unsigned char)104;
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
