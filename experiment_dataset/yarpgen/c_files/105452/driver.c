#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3262195957U;
signed char var_1 = (signed char)52;
signed char var_4 = (signed char)117;
unsigned char var_6 = (unsigned char)26;
long long int var_7 = 1470449044171895300LL;
int var_10 = -976033295;
int zero = 0;
unsigned char var_12 = (unsigned char)77;
unsigned long long int var_13 = 16905300558512020596ULL;
short var_14 = (short)-24477;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
