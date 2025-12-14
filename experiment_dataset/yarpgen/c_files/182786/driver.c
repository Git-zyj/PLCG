#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)22013;
short var_5 = (short)-19776;
short var_12 = (short)18572;
unsigned long long int var_13 = 15535998753455713181ULL;
int zero = 0;
int var_19 = -1685993479;
short var_20 = (short)17989;
unsigned int var_21 = 86669599U;
int var_22 = -754409651;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
