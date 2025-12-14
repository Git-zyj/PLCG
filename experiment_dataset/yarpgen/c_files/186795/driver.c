#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3346263876646096112LL;
short var_2 = (short)1154;
short var_4 = (short)-22419;
_Bool var_8 = (_Bool)1;
long long int var_9 = 2870729202931009901LL;
int var_10 = -1060049505;
long long int var_11 = -3858950969504279218LL;
int zero = 0;
signed char var_14 = (signed char)108;
short var_15 = (short)2186;
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
