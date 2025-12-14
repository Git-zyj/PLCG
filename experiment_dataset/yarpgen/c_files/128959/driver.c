#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 464774593;
unsigned char var_4 = (unsigned char)179;
unsigned int var_5 = 3341912972U;
unsigned int var_6 = 629678643U;
signed char var_7 = (signed char)79;
unsigned long long int var_11 = 8160044199972943006ULL;
int zero = 0;
long long int var_12 = -7144685398134178921LL;
unsigned char var_13 = (unsigned char)249;
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
