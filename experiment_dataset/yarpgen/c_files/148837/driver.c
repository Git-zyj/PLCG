#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)18749;
long long int var_5 = -8880488832402161330LL;
signed char var_6 = (signed char)76;
short var_8 = (short)18749;
unsigned int var_11 = 1600500548U;
int zero = 0;
short var_13 = (short)6684;
unsigned long long int var_14 = 16774239202714284198ULL;
void init() {
}

void checksum() {
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
