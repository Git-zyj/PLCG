#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)9383;
unsigned long long int var_8 = 12492877372940611335ULL;
signed char var_11 = (signed char)-101;
int zero = 0;
unsigned int var_12 = 1952027712U;
unsigned short var_13 = (unsigned short)45762;
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
