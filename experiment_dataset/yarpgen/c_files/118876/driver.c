#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7738725229403759122ULL;
signed char var_2 = (signed char)25;
unsigned short var_8 = (unsigned short)46214;
unsigned char var_13 = (unsigned char)252;
short var_17 = (short)2056;
int zero = 0;
int var_18 = 1581579846;
unsigned short var_19 = (unsigned short)33872;
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
