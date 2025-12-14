#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2808637550881174940LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 17591385936109787209ULL;
unsigned long long int var_11 = 12790104071574851127ULL;
unsigned char var_13 = (unsigned char)91;
int zero = 0;
unsigned char var_16 = (unsigned char)74;
short var_17 = (short)-2973;
unsigned char var_18 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
