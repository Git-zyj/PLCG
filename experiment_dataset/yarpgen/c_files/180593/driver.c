#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)23088;
int var_3 = 881565326;
int var_4 = -1903999202;
signed char var_14 = (signed char)91;
int zero = 0;
unsigned short var_18 = (unsigned short)45222;
signed char var_19 = (signed char)-70;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
