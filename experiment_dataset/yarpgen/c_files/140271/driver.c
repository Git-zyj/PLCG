#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)9;
signed char var_9 = (signed char)37;
int var_11 = 525488472;
signed char var_12 = (signed char)-49;
int var_14 = 418664086;
short var_18 = (short)-14838;
int zero = 0;
signed char var_20 = (signed char)88;
unsigned int var_21 = 3048868988U;
unsigned short var_22 = (unsigned short)50263;
int var_23 = -857759410;
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
