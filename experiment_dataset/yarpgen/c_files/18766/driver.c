#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1872031904;
short var_5 = (short)-4661;
unsigned long long int var_8 = 1891112916125041705ULL;
_Bool var_9 = (_Bool)1;
short var_13 = (short)-2186;
int zero = 0;
signed char var_20 = (signed char)-105;
unsigned short var_21 = (unsigned short)36435;
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
