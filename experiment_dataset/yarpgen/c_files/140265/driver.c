#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 777217273;
signed char var_1 = (signed char)39;
signed char var_4 = (signed char)-121;
signed char var_5 = (signed char)-72;
unsigned int var_11 = 1708435U;
signed char var_12 = (signed char)-19;
int zero = 0;
long long int var_14 = 2954005066419737022LL;
signed char var_15 = (signed char)56;
short var_16 = (short)23068;
void init() {
}

void checksum() {
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
