#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13770371588660166020ULL;
unsigned long long int var_4 = 427213860871768316ULL;
unsigned long long int var_5 = 15560873075160251558ULL;
short var_10 = (short)-29288;
int zero = 0;
signed char var_14 = (signed char)-7;
unsigned char var_15 = (unsigned char)95;
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
