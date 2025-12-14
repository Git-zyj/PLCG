#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17497361943789624604ULL;
int var_11 = -1623097245;
unsigned short var_14 = (unsigned short)59768;
int zero = 0;
unsigned long long int var_20 = 15015518920636189040ULL;
unsigned short var_21 = (unsigned short)19408;
signed char var_22 = (signed char)75;
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
