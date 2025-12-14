#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 512339675;
unsigned long long int var_7 = 14635715585653613539ULL;
int var_10 = -2034920344;
short var_18 = (short)-16926;
int zero = 0;
unsigned long long int var_20 = 245662314442929315ULL;
unsigned long long int var_21 = 13075883285562130802ULL;
signed char var_22 = (signed char)-23;
signed char var_23 = (signed char)-120;
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
