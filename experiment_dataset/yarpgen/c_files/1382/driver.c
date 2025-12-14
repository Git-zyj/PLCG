#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6377883969472362983ULL;
unsigned char var_2 = (unsigned char)147;
signed char var_9 = (signed char)-96;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_17 = 497839690;
unsigned char var_18 = (unsigned char)70;
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
