#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15297;
signed char var_1 = (signed char)91;
signed char var_3 = (signed char)84;
long long int var_9 = -8028020595712961266LL;
unsigned int var_10 = 19088476U;
int var_12 = -1762233278;
signed char var_15 = (signed char)124;
int var_16 = -2059718982;
signed char var_17 = (signed char)4;
int zero = 0;
signed char var_18 = (signed char)-112;
signed char var_19 = (signed char)-11;
signed char var_20 = (signed char)14;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
