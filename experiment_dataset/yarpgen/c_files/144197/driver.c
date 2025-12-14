#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1413103828068594104ULL;
short var_5 = (short)-32013;
long long int var_6 = 7824519620159219506LL;
unsigned long long int var_7 = 16831655384269916366ULL;
short var_10 = (short)-10957;
int zero = 0;
short var_14 = (short)-29999;
unsigned char var_15 = (unsigned char)26;
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
