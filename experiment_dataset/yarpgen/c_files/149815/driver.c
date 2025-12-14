#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4007384113U;
int var_5 = 1142363747;
signed char var_9 = (signed char)80;
unsigned short var_14 = (unsigned short)13507;
int zero = 0;
unsigned short var_15 = (unsigned short)58467;
signed char var_16 = (signed char)-93;
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
