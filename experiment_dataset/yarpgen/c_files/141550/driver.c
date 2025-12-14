#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14548035298438144263ULL;
unsigned short var_4 = (unsigned short)63318;
signed char var_7 = (signed char)-15;
signed char var_9 = (signed char)48;
int var_13 = 947970178;
int zero = 0;
int var_14 = -1999205371;
signed char var_15 = (signed char)93;
void init() {
}

void checksum() {
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
