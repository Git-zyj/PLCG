#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -113904835;
unsigned long long int var_2 = 5873506830831556800ULL;
short var_8 = (short)-8998;
unsigned int var_9 = 3396159965U;
short var_11 = (short)-13848;
int zero = 0;
signed char var_12 = (signed char)17;
unsigned long long int var_13 = 14683128950736816284ULL;
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
