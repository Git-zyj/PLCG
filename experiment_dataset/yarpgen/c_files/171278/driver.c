#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9006;
unsigned int var_1 = 3600654496U;
_Bool var_4 = (_Bool)1;
int var_5 = 289136423;
short var_6 = (short)29132;
short var_8 = (short)-4170;
int zero = 0;
short var_10 = (short)10704;
short var_11 = (short)-2286;
signed char var_12 = (signed char)-38;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
