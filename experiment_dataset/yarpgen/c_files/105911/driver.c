#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9208;
unsigned long long int var_6 = 2800439955044111971ULL;
signed char var_7 = (signed char)26;
int zero = 0;
signed char var_12 = (signed char)-109;
unsigned long long int var_13 = 14420553195311913630ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
