#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-27401;
long long int var_14 = 4524464003810518058LL;
unsigned short var_15 = (unsigned short)7408;
unsigned short var_17 = (unsigned short)56737;
long long int var_18 = 2243607216206064201LL;
int zero = 0;
unsigned char var_20 = (unsigned char)43;
_Bool var_21 = (_Bool)0;
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
