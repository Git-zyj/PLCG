#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9105821733807564876ULL;
signed char var_1 = (signed char)11;
short var_2 = (short)-17038;
unsigned short var_4 = (unsigned short)13268;
long long int var_14 = 7853520291430908180LL;
int zero = 0;
unsigned long long int var_16 = 1071746158128387038ULL;
signed char var_17 = (signed char)68;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
