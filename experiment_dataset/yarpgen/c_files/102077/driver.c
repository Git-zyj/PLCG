#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-25868;
unsigned long long int var_13 = 10515592420338482205ULL;
int zero = 0;
signed char var_16 = (signed char)-38;
unsigned short var_17 = (unsigned short)3988;
signed char var_18 = (signed char)88;
unsigned short var_19 = (unsigned short)47873;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
