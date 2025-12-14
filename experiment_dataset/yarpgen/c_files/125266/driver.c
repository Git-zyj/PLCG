#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 1882214273057722435ULL;
unsigned char var_15 = (unsigned char)152;
int var_16 = -273738263;
short var_17 = (short)17587;
short var_19 = (short)15130;
int zero = 0;
signed char var_20 = (signed char)32;
short var_21 = (short)-202;
int var_22 = 719622380;
int var_23 = -1417691144;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
