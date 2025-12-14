#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-86;
short var_6 = (short)17947;
unsigned long long int var_15 = 1033438767586959499ULL;
int zero = 0;
short var_19 = (short)25017;
unsigned short var_20 = (unsigned short)37621;
long long int var_21 = 3367250360579952232LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
