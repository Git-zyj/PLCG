#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)7147;
unsigned long long int var_10 = 5430808385046155528ULL;
unsigned char var_11 = (unsigned char)200;
unsigned short var_14 = (unsigned short)45144;
int zero = 0;
unsigned short var_15 = (unsigned short)55306;
unsigned short var_16 = (unsigned short)18937;
unsigned long long int var_17 = 15917996981311005872ULL;
unsigned short var_18 = (unsigned short)47249;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
