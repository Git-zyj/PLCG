#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46889;
unsigned char var_6 = (unsigned char)196;
short var_7 = (short)-24249;
unsigned char var_8 = (unsigned char)20;
unsigned int var_10 = 245526518U;
int zero = 0;
unsigned long long int var_14 = 14553109796416292501ULL;
signed char var_15 = (signed char)-77;
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
