#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-91;
int var_9 = -514358437;
long long int var_11 = -8987242701305258503LL;
unsigned long long int var_13 = 1868037458617221904ULL;
int zero = 0;
short var_17 = (short)-14879;
unsigned short var_18 = (unsigned short)4373;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
