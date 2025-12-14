#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26250;
short var_1 = (short)19537;
_Bool var_5 = (_Bool)0;
signed char var_9 = (signed char)-40;
signed char var_11 = (signed char)37;
int zero = 0;
unsigned char var_13 = (unsigned char)31;
unsigned short var_14 = (unsigned short)59575;
long long int var_15 = 230380509959216722LL;
void init() {
}

void checksum() {
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
