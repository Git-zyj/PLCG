#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7803083748276963023ULL;
short var_8 = (short)22149;
short var_9 = (short)-6434;
unsigned char var_14 = (unsigned char)153;
int zero = 0;
int var_16 = -642835476;
long long int var_17 = -8220196073239189462LL;
long long int var_18 = 2720570851095570686LL;
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
