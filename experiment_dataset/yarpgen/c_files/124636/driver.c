#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7627326311326935416LL;
unsigned int var_9 = 687833122U;
unsigned int var_12 = 951491162U;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-97;
void init() {
}

void checksum() {
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
