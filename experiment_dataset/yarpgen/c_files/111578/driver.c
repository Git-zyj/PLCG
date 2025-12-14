#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1153542487;
signed char var_4 = (signed char)90;
unsigned short var_5 = (unsigned short)40177;
_Bool var_7 = (_Bool)1;
int zero = 0;
int var_14 = -2007987341;
int var_15 = -819383323;
void init() {
}

void checksum() {
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
