#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21503;
unsigned long long int var_1 = 3225351595440709760ULL;
unsigned int var_12 = 2839846095U;
int zero = 0;
unsigned char var_15 = (unsigned char)186;
short var_16 = (short)-1025;
long long int var_17 = 2151697296983933846LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
