#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 17066978272300817235ULL;
unsigned char var_7 = (unsigned char)130;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-26667;
int zero = 0;
short var_11 = (short)-25843;
unsigned int var_12 = 310678784U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
