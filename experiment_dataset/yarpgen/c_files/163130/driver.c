#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4349;
unsigned int var_6 = 2638415318U;
unsigned short var_8 = (unsigned short)55241;
long long int var_9 = 420623756122569326LL;
int zero = 0;
short var_14 = (short)4650;
short var_15 = (short)6983;
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
