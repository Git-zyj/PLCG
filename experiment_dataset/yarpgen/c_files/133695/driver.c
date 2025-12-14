#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1385659513;
unsigned char var_5 = (unsigned char)169;
int var_7 = -1251929560;
int zero = 0;
long long int var_10 = -7717277478907184836LL;
unsigned char var_11 = (unsigned char)93;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
