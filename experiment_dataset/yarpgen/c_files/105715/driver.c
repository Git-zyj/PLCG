#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
signed char var_2 = (signed char)-13;
unsigned short var_4 = (unsigned short)7340;
unsigned long long int var_6 = 1817262280960608036ULL;
signed char var_8 = (signed char)-1;
int zero = 0;
unsigned int var_10 = 4019329601U;
signed char var_11 = (signed char)9;
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
