#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2578698855U;
unsigned int var_4 = 3579676144U;
unsigned short var_5 = (unsigned short)56238;
short var_7 = (short)25721;
unsigned short var_12 = (unsigned short)52868;
int zero = 0;
long long int var_13 = 7120847849651326109LL;
unsigned int var_14 = 1736454674U;
unsigned short var_15 = (unsigned short)17592;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
