#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2605055212U;
unsigned char var_7 = (unsigned char)104;
unsigned char var_10 = (unsigned char)138;
unsigned long long int var_12 = 11825986409284025588ULL;
int zero = 0;
int var_13 = 1387540550;
unsigned long long int var_14 = 3110677471103849887ULL;
unsigned int var_15 = 3739228199U;
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
