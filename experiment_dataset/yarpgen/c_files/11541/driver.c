#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-22904;
signed char var_5 = (signed char)-5;
unsigned short var_7 = (unsigned short)36642;
short var_12 = (short)29852;
unsigned long long int var_17 = 7899514575330940855ULL;
int zero = 0;
unsigned long long int var_18 = 15508497867401607239ULL;
int var_19 = -1946868825;
short var_20 = (short)-28620;
unsigned short var_21 = (unsigned short)10735;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
