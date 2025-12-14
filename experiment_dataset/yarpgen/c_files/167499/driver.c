#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -931648047041436439LL;
short var_4 = (short)32648;
unsigned long long int var_5 = 5165493360214073082ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_17 = -7729641282729980278LL;
signed char var_18 = (signed char)80;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
