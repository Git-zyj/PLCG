#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4051966104124684453LL;
unsigned short var_5 = (unsigned short)62794;
unsigned long long int var_8 = 6171951207996540845ULL;
unsigned char var_9 = (unsigned char)58;
int zero = 0;
unsigned int var_12 = 2969154776U;
unsigned char var_13 = (unsigned char)74;
unsigned char var_14 = (unsigned char)48;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
