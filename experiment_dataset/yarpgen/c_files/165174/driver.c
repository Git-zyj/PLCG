#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -913287883;
int var_3 = -1852731342;
unsigned char var_5 = (unsigned char)24;
long long int var_9 = 1337783636982073221LL;
unsigned int var_13 = 1120682601U;
int zero = 0;
unsigned short var_14 = (unsigned short)7966;
long long int var_15 = 479049680828423178LL;
int var_16 = -1689119354;
void init() {
}

void checksum() {
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
