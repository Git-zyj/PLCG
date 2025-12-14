#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2919956698U;
long long int var_6 = 2160300398826849094LL;
unsigned long long int var_7 = 1715055560717959090ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)19787;
signed char var_11 = (signed char)-83;
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
