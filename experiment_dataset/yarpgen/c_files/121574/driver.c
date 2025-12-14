#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9700589256985404276ULL;
unsigned long long int var_7 = 15818814630112074282ULL;
signed char var_12 = (signed char)114;
int zero = 0;
unsigned short var_13 = (unsigned short)35823;
_Bool var_14 = (_Bool)0;
int var_15 = 683817589;
void init() {
}

void checksum() {
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
