#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29610;
int var_9 = -1092101063;
signed char var_10 = (signed char)77;
signed char var_11 = (signed char)35;
int var_17 = -2113420443;
int zero = 0;
short var_18 = (short)-436;
long long int var_19 = -2338099694691828092LL;
int var_20 = -1343073622;
unsigned int var_21 = 1763267518U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
