#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1731604233;
long long int var_12 = -9217248120003806780LL;
int var_14 = -721744326;
int zero = 0;
int var_15 = 350857678;
int var_16 = 176633929;
unsigned short var_17 = (unsigned short)14463;
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
