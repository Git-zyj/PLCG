#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)95;
unsigned char var_8 = (unsigned char)154;
long long int var_9 = 5978710336213170178LL;
int zero = 0;
unsigned short var_10 = (unsigned short)23237;
long long int var_11 = 4224951657994953398LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
