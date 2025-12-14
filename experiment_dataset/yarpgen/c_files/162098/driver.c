#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6827;
long long int var_1 = 4322642570239112537LL;
signed char var_10 = (signed char)-91;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)50;
int zero = 0;
unsigned char var_18 = (unsigned char)220;
unsigned int var_19 = 3551237247U;
unsigned short var_20 = (unsigned short)36571;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
