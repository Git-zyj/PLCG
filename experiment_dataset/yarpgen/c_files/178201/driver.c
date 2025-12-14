#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)2;
short var_11 = (short)32408;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 9079005029205717318ULL;
long long int var_21 = 7219992454582408696LL;
short var_22 = (short)-757;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
