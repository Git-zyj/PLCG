#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)32431;
unsigned long long int var_5 = 2690801137524921488ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)185;
int var_9 = -1144610937;
int zero = 0;
short var_15 = (short)204;
unsigned short var_16 = (unsigned short)31679;
void init() {
}

void checksum() {
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
