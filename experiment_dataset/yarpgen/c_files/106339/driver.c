#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19951;
_Bool var_2 = (_Bool)0;
unsigned char var_9 = (unsigned char)63;
int var_11 = 1352423290;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 15085653978311602267ULL;
short var_21 = (short)-13041;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
