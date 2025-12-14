#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-45;
int var_5 = 576941784;
short var_9 = (short)-31323;
unsigned char var_10 = (unsigned char)6;
unsigned char var_11 = (unsigned char)95;
int var_14 = -373503937;
unsigned char var_15 = (unsigned char)88;
int zero = 0;
int var_18 = -1532396377;
signed char var_19 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
