#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-13793;
_Bool var_10 = (_Bool)1;
int var_13 = 776386793;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)59;
unsigned int var_20 = 3899493656U;
void init() {
}

void checksum() {
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
