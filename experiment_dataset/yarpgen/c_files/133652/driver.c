#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14829888499335106987ULL;
unsigned short var_1 = (unsigned short)22644;
unsigned short var_6 = (unsigned short)32697;
signed char var_9 = (signed char)76;
unsigned long long int var_14 = 3274782625519829996ULL;
int zero = 0;
signed char var_15 = (signed char)-7;
unsigned long long int var_16 = 9201537918174281303ULL;
unsigned short var_17 = (unsigned short)48694;
unsigned long long int var_18 = 260946375156977506ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
