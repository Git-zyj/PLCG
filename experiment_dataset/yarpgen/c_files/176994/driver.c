#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3313506871U;
long long int var_2 = 2676879503861138747LL;
signed char var_3 = (signed char)-48;
long long int var_4 = -7810401923636793777LL;
int var_5 = 369023951;
short var_8 = (short)-11119;
unsigned int var_10 = 1649611770U;
int zero = 0;
signed char var_11 = (signed char)84;
unsigned long long int var_12 = 6033297173254286554ULL;
unsigned int var_13 = 729688544U;
unsigned int var_14 = 2839973614U;
unsigned long long int var_15 = 18442883599771150995ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
