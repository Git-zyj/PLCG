#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 375260759659889055ULL;
unsigned int var_4 = 3315211307U;
int var_5 = 935870676;
unsigned short var_6 = (unsigned short)58944;
unsigned long long int var_8 = 14325355195246233824ULL;
int zero = 0;
unsigned long long int var_10 = 3111205704107744893ULL;
unsigned int var_11 = 3506295988U;
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
