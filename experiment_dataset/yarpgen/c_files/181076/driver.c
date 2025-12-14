#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)119;
unsigned long long int var_6 = 11270166266636353515ULL;
unsigned char var_12 = (unsigned char)222;
unsigned short var_13 = (unsigned short)31690;
int zero = 0;
signed char var_20 = (signed char)72;
signed char var_21 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
