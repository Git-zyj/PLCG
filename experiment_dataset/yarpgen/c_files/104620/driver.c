#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9565356814980011824ULL;
unsigned char var_8 = (unsigned char)123;
long long int var_9 = -7740362130679742051LL;
int zero = 0;
unsigned char var_17 = (unsigned char)127;
unsigned long long int var_18 = 12128574780876368498ULL;
void init() {
}

void checksum() {
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
