#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)71;
signed char var_9 = (signed char)-120;
unsigned short var_11 = (unsigned short)6916;
short var_16 = (short)14430;
signed char var_17 = (signed char)48;
int zero = 0;
unsigned short var_18 = (unsigned short)42125;
short var_19 = (short)4014;
long long int var_20 = 4911624074844346115LL;
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
