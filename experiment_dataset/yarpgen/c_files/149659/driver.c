#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)110;
int var_4 = -1190909194;
signed char var_6 = (signed char)25;
signed char var_8 = (signed char)-88;
int zero = 0;
short var_14 = (short)-8961;
unsigned long long int var_15 = 17497978269133013976ULL;
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
