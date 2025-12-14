#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5492;
int var_3 = -1846388363;
long long int var_13 = -5953639290015063591LL;
int zero = 0;
unsigned int var_16 = 1878470455U;
unsigned char var_17 = (unsigned char)126;
long long int var_18 = 4327585003540558023LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
