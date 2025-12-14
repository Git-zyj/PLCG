#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 427391241U;
unsigned short var_2 = (unsigned short)46924;
short var_3 = (short)-22307;
short var_4 = (short)32225;
long long int var_5 = 5991871281963958786LL;
signed char var_6 = (signed char)-54;
unsigned int var_7 = 4246518132U;
int zero = 0;
short var_10 = (short)21427;
short var_11 = (short)-2014;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
