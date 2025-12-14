#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = -1642730052877920496LL;
unsigned char var_10 = (unsigned char)235;
unsigned long long int var_11 = 11309229723605471741ULL;
int zero = 0;
long long int var_12 = 3919665621827580915LL;
unsigned short var_13 = (unsigned short)52049;
unsigned int var_14 = 1103441370U;
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
