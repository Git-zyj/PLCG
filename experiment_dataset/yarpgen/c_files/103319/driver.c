#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30127;
unsigned short var_6 = (unsigned short)64234;
int var_8 = -552675389;
unsigned short var_11 = (unsigned short)65106;
int zero = 0;
int var_12 = 1855900676;
unsigned int var_13 = 3586509218U;
unsigned int var_14 = 3338766106U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
