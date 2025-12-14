#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-103;
signed char var_1 = (signed char)25;
short var_2 = (short)-7636;
long long int var_3 = -6776947781997246420LL;
unsigned char var_5 = (unsigned char)222;
unsigned int var_7 = 3819828230U;
short var_8 = (short)-15822;
int var_9 = -1450446079;
int zero = 0;
unsigned char var_10 = (unsigned char)149;
unsigned char var_11 = (unsigned char)64;
long long int var_12 = -6939804965851084963LL;
unsigned int var_13 = 536970889U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
