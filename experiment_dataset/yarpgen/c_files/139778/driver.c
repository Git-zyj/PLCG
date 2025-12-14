#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1044347225;
short var_2 = (short)1367;
int zero = 0;
unsigned long long int var_11 = 17332648243179942060ULL;
short var_12 = (short)-6145;
unsigned long long int var_13 = 10280888974457065411ULL;
long long int var_14 = -5197710937428278255LL;
unsigned char var_15 = (unsigned char)169;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
