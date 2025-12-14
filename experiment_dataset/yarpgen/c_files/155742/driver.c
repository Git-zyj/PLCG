#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6739558658449175277LL;
unsigned short var_4 = (unsigned short)6064;
unsigned char var_5 = (unsigned char)147;
unsigned short var_7 = (unsigned short)38736;
unsigned short var_8 = (unsigned short)64057;
int zero = 0;
unsigned short var_13 = (unsigned short)48949;
signed char var_14 = (signed char)108;
signed char var_15 = (signed char)35;
unsigned int var_16 = 2121331034U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
