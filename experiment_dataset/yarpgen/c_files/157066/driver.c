#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)52485;
signed char var_9 = (signed char)13;
unsigned long long int var_14 = 9969795700636530681ULL;
short var_17 = (short)8982;
int zero = 0;
int var_20 = -216920333;
unsigned int var_21 = 3356678666U;
void init() {
}

void checksum() {
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
