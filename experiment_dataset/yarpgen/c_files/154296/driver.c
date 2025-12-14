#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-103;
signed char var_2 = (signed char)-60;
unsigned short var_5 = (unsigned short)23077;
unsigned short var_6 = (unsigned short)15912;
unsigned short var_8 = (unsigned short)26782;
signed char var_9 = (signed char)-14;
int zero = 0;
signed char var_10 = (signed char)-14;
unsigned short var_11 = (unsigned short)27769;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
