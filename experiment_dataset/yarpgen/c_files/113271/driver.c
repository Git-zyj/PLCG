#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7121096053596012377ULL;
unsigned char var_2 = (unsigned char)133;
unsigned char var_4 = (unsigned char)209;
signed char var_8 = (signed char)-27;
int zero = 0;
short var_13 = (short)-6231;
short var_14 = (short)-24825;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
