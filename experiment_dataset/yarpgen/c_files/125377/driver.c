#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1460213814;
long long int var_8 = -5760418908673567541LL;
unsigned char var_11 = (unsigned char)253;
int zero = 0;
unsigned char var_17 = (unsigned char)154;
unsigned long long int var_18 = 14685184583231236641ULL;
signed char var_19 = (signed char)-9;
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
