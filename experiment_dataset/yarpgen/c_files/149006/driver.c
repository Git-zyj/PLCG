#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)25662;
unsigned long long int var_4 = 1171817142156010915ULL;
short var_6 = (short)31796;
signed char var_7 = (signed char)-53;
int zero = 0;
unsigned char var_10 = (unsigned char)247;
signed char var_11 = (signed char)-88;
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
