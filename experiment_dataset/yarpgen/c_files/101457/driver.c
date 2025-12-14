#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_3 = (unsigned char)172;
unsigned long long int var_4 = 4368195221145000792ULL;
short var_8 = (short)12168;
unsigned long long int var_9 = 14743403746004079069ULL;
int zero = 0;
long long int var_14 = 6969968282977078104LL;
unsigned short var_15 = (unsigned short)35955;
long long int var_16 = 2266463591975094221LL;
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
