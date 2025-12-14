#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2647988786869983439LL;
signed char var_11 = (signed char)37;
short var_12 = (short)7287;
unsigned short var_13 = (unsigned short)25422;
unsigned char var_15 = (unsigned char)58;
int zero = 0;
unsigned short var_16 = (unsigned short)23431;
signed char var_17 = (signed char)-75;
short var_18 = (short)31555;
int var_19 = 1590185805;
signed char var_20 = (signed char)62;
unsigned short var_21 = (unsigned short)51591;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
