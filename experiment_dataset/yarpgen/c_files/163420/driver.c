#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57717;
long long int var_1 = -460057216022981367LL;
int var_3 = -1649363803;
unsigned long long int var_4 = 10013624612771697341ULL;
short var_5 = (short)-2608;
signed char var_9 = (signed char)78;
unsigned int var_10 = 1663024883U;
int zero = 0;
unsigned long long int var_15 = 7614616900674696597ULL;
unsigned long long int var_16 = 10975979758269887786ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
