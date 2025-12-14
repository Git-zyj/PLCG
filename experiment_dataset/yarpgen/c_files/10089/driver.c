#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1752948175U;
unsigned long long int var_4 = 17545892874361887187ULL;
int zero = 0;
short var_17 = (short)-10259;
signed char var_18 = (signed char)79;
unsigned short var_19 = (unsigned short)62067;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
