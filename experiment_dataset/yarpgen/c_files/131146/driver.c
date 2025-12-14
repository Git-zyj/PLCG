#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_5 = 8323092849835730818LL;
unsigned char var_9 = (unsigned char)126;
int zero = 0;
int var_18 = -1288806461;
unsigned long long int var_19 = 1826393465822873525ULL;
unsigned int var_20 = 1398159221U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
