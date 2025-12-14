#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-102;
unsigned char var_6 = (unsigned char)65;
short var_7 = (short)-4261;
long long int var_8 = -8234977322523049810LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -8317487908799110456LL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
