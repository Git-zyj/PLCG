#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1842123546;
long long int var_4 = 5650076106751833347LL;
unsigned short var_5 = (unsigned short)61026;
signed char var_11 = (signed char)79;
int zero = 0;
unsigned short var_12 = (unsigned short)9865;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
