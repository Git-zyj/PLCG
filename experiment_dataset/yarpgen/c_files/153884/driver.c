#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)242;
long long int var_1 = 4585649903246772435LL;
long long int var_5 = -6789927687966495461LL;
int zero = 0;
unsigned int var_14 = 2176702794U;
unsigned short var_15 = (unsigned short)36856;
unsigned int var_16 = 2558740270U;
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
