#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4177044933756455037ULL;
short var_13 = (short)8632;
int zero = 0;
unsigned long long int var_15 = 524878248536373509ULL;
signed char var_16 = (signed char)-94;
unsigned char var_17 = (unsigned char)62;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
