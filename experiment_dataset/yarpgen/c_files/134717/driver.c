#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2844;
signed char var_5 = (signed char)74;
signed char var_6 = (signed char)-115;
int zero = 0;
unsigned long long int var_14 = 13200254055582225728ULL;
long long int var_15 = -6101889226348526810LL;
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
