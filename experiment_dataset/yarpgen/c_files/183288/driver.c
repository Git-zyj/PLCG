#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)29016;
unsigned short var_9 = (unsigned short)6423;
unsigned int var_12 = 1685779159U;
unsigned int var_13 = 3430171709U;
int zero = 0;
long long int var_17 = -4220043892995206104LL;
int var_18 = 2015320556;
signed char var_19 = (signed char)-84;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
