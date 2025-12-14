#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)24;
unsigned short var_5 = (unsigned short)35370;
unsigned char var_10 = (unsigned char)94;
int zero = 0;
signed char var_14 = (signed char)62;
signed char var_15 = (signed char)-51;
unsigned short var_16 = (unsigned short)4792;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
