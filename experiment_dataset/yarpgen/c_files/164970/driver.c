#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3489318680U;
unsigned char var_3 = (unsigned char)37;
short var_4 = (short)-5419;
long long int var_5 = -1330436810194288246LL;
signed char var_7 = (signed char)87;
int zero = 0;
unsigned long long int var_12 = 9580705137773404245ULL;
unsigned long long int var_13 = 11444625813786459280ULL;
unsigned char var_14 = (unsigned char)203;
short var_15 = (short)31030;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
