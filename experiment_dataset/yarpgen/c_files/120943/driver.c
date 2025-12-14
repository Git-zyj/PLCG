#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37091;
long long int var_3 = -1890404045391494241LL;
unsigned long long int var_5 = 9978582910245889645ULL;
int zero = 0;
signed char var_12 = (signed char)38;
long long int var_13 = 7176344663019559694LL;
unsigned int var_14 = 1962619501U;
unsigned char var_15 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
