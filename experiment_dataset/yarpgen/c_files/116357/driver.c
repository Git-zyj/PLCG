#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12489521214319953136ULL;
short var_3 = (short)-16799;
short var_5 = (short)-23733;
unsigned char var_14 = (unsigned char)15;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 1854017987197608122ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
