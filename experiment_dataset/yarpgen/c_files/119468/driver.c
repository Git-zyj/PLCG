#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32638;
signed char var_1 = (signed char)82;
unsigned short var_10 = (unsigned short)7159;
int zero = 0;
short var_11 = (short)-21954;
long long int var_12 = 171642324842328609LL;
short var_13 = (short)-26647;
short var_14 = (short)23451;
signed char var_15 = (signed char)121;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
