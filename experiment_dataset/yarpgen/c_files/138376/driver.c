#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2034048076;
unsigned int var_5 = 482918107U;
signed char var_8 = (signed char)74;
short var_9 = (short)-26838;
unsigned short var_10 = (unsigned short)38090;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 13213650781539032734ULL;
unsigned short var_16 = (unsigned short)16582;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
