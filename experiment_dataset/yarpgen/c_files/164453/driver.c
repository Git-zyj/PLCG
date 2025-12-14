#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-71;
unsigned int var_2 = 1197021638U;
unsigned int var_4 = 1751069356U;
short var_7 = (short)-20691;
unsigned long long int var_8 = 8248276134212768282ULL;
int var_9 = -496892688;
unsigned int var_11 = 3288645314U;
int zero = 0;
unsigned long long int var_12 = 7119558137011910208ULL;
unsigned int var_13 = 2768524394U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
