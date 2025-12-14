#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4973627918830610214LL;
signed char var_7 = (signed char)-2;
short var_13 = (short)-11404;
short var_17 = (short)-32600;
unsigned long long int var_19 = 8735027202225152067ULL;
int zero = 0;
long long int var_20 = -3747396936428145378LL;
unsigned short var_21 = (unsigned short)52270;
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
