#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8482588010742699000LL;
long long int var_7 = 5069567306953989053LL;
long long int var_8 = -8753818746371003915LL;
unsigned char var_9 = (unsigned char)201;
int var_11 = -1713492590;
signed char var_12 = (signed char)-65;
signed char var_15 = (signed char)112;
int zero = 0;
long long int var_17 = -6061025871288567413LL;
int var_18 = 268725822;
void init() {
}

void checksum() {
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
