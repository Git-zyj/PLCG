#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17012119080339460291ULL;
int var_5 = 825727166;
unsigned short var_8 = (unsigned short)34470;
signed char var_12 = (signed char)14;
int var_15 = 835673591;
unsigned long long int var_16 = 1967341073824944885ULL;
int zero = 0;
unsigned long long int var_17 = 5795869405294333110ULL;
int var_18 = 1245095959;
unsigned char var_19 = (unsigned char)221;
signed char var_20 = (signed char)77;
unsigned short var_21 = (unsigned short)45771;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
