#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)37;
unsigned int var_8 = 738708228U;
unsigned short var_11 = (unsigned short)64204;
unsigned int var_14 = 4064240815U;
unsigned long long int var_16 = 6424609363812959059ULL;
int zero = 0;
unsigned int var_17 = 1417643809U;
signed char var_18 = (signed char)-119;
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
