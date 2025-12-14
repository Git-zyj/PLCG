#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7871134826400098936ULL;
unsigned long long int var_5 = 10721900829631160132ULL;
unsigned long long int var_6 = 11057659367453498129ULL;
_Bool var_7 = (_Bool)1;
long long int var_9 = 2863892693515017203LL;
signed char var_10 = (signed char)72;
int zero = 0;
signed char var_13 = (signed char)-89;
unsigned short var_14 = (unsigned short)25487;
signed char var_15 = (signed char)82;
signed char var_16 = (signed char)42;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
