#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4126722855U;
long long int var_6 = 4608202657461977356LL;
unsigned long long int var_7 = 9553498312646686106ULL;
signed char var_14 = (signed char)66;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_17 = (short)-26046;
unsigned long long int var_18 = 8913687627538495945ULL;
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
