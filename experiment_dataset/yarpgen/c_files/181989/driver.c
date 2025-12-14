#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 753954679729516133ULL;
unsigned char var_5 = (unsigned char)179;
short var_7 = (short)25920;
unsigned char var_9 = (unsigned char)121;
int zero = 0;
unsigned char var_14 = (unsigned char)241;
unsigned int var_15 = 3092492831U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
