#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)118;
unsigned int var_2 = 3136709104U;
signed char var_5 = (signed char)18;
unsigned short var_9 = (unsigned short)8792;
int zero = 0;
signed char var_15 = (signed char)73;
short var_16 = (short)-26171;
unsigned short var_17 = (unsigned short)12919;
int var_18 = -106541369;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
