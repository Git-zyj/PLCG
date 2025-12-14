#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16934618693810336532ULL;
unsigned char var_7 = (unsigned char)27;
unsigned char var_10 = (unsigned char)128;
int zero = 0;
short var_17 = (short)-7715;
unsigned char var_18 = (unsigned char)49;
unsigned int var_19 = 2369323997U;
unsigned long long int var_20 = 16004884505143967637ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
