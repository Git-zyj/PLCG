#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16676;
unsigned long long int var_1 = 10643970159868999621ULL;
unsigned short var_5 = (unsigned short)61267;
short var_7 = (short)-4203;
unsigned int var_9 = 3848163303U;
int zero = 0;
unsigned long long int var_11 = 3524069088778491270ULL;
unsigned short var_12 = (unsigned short)46035;
int var_13 = 1500335066;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
