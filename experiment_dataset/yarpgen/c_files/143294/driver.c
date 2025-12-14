#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)184;
int var_5 = 1762849206;
unsigned char var_7 = (unsigned char)187;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)0;
long long int var_14 = -3970254163656869259LL;
unsigned short var_15 = (unsigned short)27287;
int zero = 0;
short var_18 = (short)-24058;
long long int var_19 = 5631761389889643682LL;
short var_20 = (short)-8049;
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
