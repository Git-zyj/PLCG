#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2001544249;
long long int var_2 = 4980168466554745793LL;
signed char var_4 = (signed char)124;
short var_5 = (short)13512;
unsigned short var_7 = (unsigned short)49131;
long long int var_8 = -3620719417437916719LL;
signed char var_9 = (signed char)-90;
unsigned short var_11 = (unsigned short)6691;
int zero = 0;
int var_14 = -610050075;
long long int var_15 = 3418407442722095773LL;
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
