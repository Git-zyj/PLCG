#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17821;
unsigned short var_5 = (unsigned short)13464;
signed char var_7 = (signed char)79;
unsigned long long int var_9 = 1267328953766733562ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)241;
signed char var_18 = (signed char)77;
signed char var_19 = (signed char)-111;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
