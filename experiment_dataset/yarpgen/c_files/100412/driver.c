#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)95;
unsigned int var_1 = 3622647287U;
unsigned short var_5 = (unsigned short)20340;
unsigned short var_8 = (unsigned short)37140;
signed char var_9 = (signed char)47;
signed char var_10 = (signed char)107;
signed char var_14 = (signed char)-93;
short var_15 = (short)-8821;
int zero = 0;
unsigned int var_17 = 1751693514U;
short var_18 = (short)21185;
short var_19 = (short)21151;
int var_20 = 867855663;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
